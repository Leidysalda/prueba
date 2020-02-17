#!/usr/bin/python3
"""Store first object
"""
from models.base_model import BaseModel
import json
import os

class FileStorage:
    """Filestorage
    """
    __file_path = 'models/file.json'
    __objects = ''

    def __init__():
        storage = FileStorage()
        storage.reload()
        return(storage)

    def all(self):
        return(self.__objets)

    def new(self, obj):
        for k,v in items(self.__objects):
            k = (cls.__name__)
            return(self.__objects)

    def save(self):
        with open("file.json", "a") as fl:
            json.dump(self.__objects, fl)
            json_str = json.dumps(self.__objects)
            return(json_str)

    def reload(self):
        if file.json:
            self.__dict__ = json.loads(self.__objects)
