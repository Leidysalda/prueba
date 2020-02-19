#!/usr/bin env python3
"""Defines all common attributes/methods for other classes
"""
from datetime import datetime
import uuid
import json
import models
from os import path
from models.base_model import BaseModel

class FileStorage:
    """serializes instances to a JSON file and deserializes JSON file to instances
    """
    __file_path = "file.json"
    __objects = {}

    def all(self):
        """Returns the dictionary __objects
        """
        return self.__objects

    def new(self, obj):
        """Add new object to variable __objects
        """

        ke= obj.__class__.__name__ + '.' + obj.id
        self.__objects[ke] = obj

    def save(self):
        new_dict = {}
        for key in self.__objects:
            new_dict[key] = self.__objects[key].to_dict()
        with open(self.__file_path, mode="w") as fl:
            json.dump(new_dict, fl)

    def reload(self):
        """deserializes the JSON file to __objects
        """
        if path.isfile(self.__file_path):
            new_file = {}
            with open(self.__file_path, mode="r") as fl:
                new_file = json.load(fl)
