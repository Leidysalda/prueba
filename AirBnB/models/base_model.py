#!/usr/bin env python3
"""Defines all common attributes/methods for other classes
"""
from datetime import datetime
import uuid
import json

class BaseModel:
    """Class base of project
    """

    def __init__(self):
        """Constructor
        """
        self.id = str(uuid.uuid4())
        self.created_at = datetime.now()
        self.updated_at = datetime.now()

    def __str__(self):
        """Return
        """
        return('[{}] ({}) {}'.format(self.__class__.__name__, self.id,
                                     self.__dict__))

    def save(self):
        """updates the public instance attribute updated_at
        with the current datetime
        """
        self.updated_at = datetime.now()

    def to_dict(self):
        """returns a dictionary containing all keys/values of __dict__
        of the instance
        """
        d = {
            'id': self.id,
            'created_at': self.created_at('%Y-%m-%dT%H:%M:%S.%f'),
            'updated_at': self.updated_at('%Y-%m-%dT%H:%M:%S.%f')
        }
        return(d)
