#!/usr/bin/python3
import cmd
import sys

class HBNBCommand(cmd.Cmd):
    prompt = '(hbnb)'

    def postloop(self):
        print()

if __name__ == '__main__':
    HBNBCommand().cmdloop()
