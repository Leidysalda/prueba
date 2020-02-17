#!/usr/bin env python3
"""Defines all common attributes/methods for other classes
"""
from datetime import datetime
from models import storage
import uuid
import json

class BaseModel:
    """Class base of project
    """

    def __init__(self, *args, **kwargs):
        """Constructor
        """
        if not len(kwargs) == 0:
            for key, value in kwargs.items():
                if key is "created_at":
                    setattr(self, key, datetime.strptime(value, '%Y-%m-%dT%H:%M:%S.%f'))
                elif key is "update_at":
                    setattr(self, key, datetime.strptime(value, '%Y-%m-%dT%H:%M:%S.%f'))
                elif key is not "__class__":
                    setattr(self, key, value)

        else:
            self.id = str(uuid.uuid4())
            self.created_at = datetime.now()
            self.updated_at = datetime.now()
            storage.new(obj)

    def __str__(self):
        """Return
        """
        return('[{}] ({}) {}'.format(self.__class__.__name__, self.id,self.__dict__))

    def save(self):
        """updates the public instance attribute updated_at
        with the current datetime
        """
        self.updated_at = datetime.now()
        storage.save()

    def to_dict(self):
        """returns a dictionary containing all keys/values of __dict__
        of the instance
        """
        self.__dict__["__class__"]=self.__class__.__name__
        self.__dict__["created_at"]=self.created_at.isoformat()
        self.__dict__["updated_at"]=self.updated_at.isoformat()
        return(self.__dict__)
