# AirBnB_clone

![](https://lh3.googleusercontent.com/proxy/AwIqLYUQXpf8SWbaIcw9ABKS7m8A2FaHxX1Z8xIjFjYK3A4_3Tjkw0vH2_G_7Xy7U7qrY1EpGR-x67sTS6D-cdxvEfr1QFMCN0tDRbQ--QJkIFamxK9owmjBE7rwwjU1Da2xXPJBWYKXFloZ)

I know you were waiting for it: it’s here!

xdThe AirBnB clone project starts now until… the end of the first year. The goal of the project is to deploy on your server a simple copy of the AirBnB website.

You won’t implement all the features, only some of them to cover all fundamental concepts of the higher level programming track.

After 4 months, you will have a complete web application composed by:

A command interpreter to manipulate data without a visual interface, like in a Shell (perfect for development and debugging)
A website (the front-end) that shows the final product to everybody: static and dynamic
A database or files that store data (data = objects)
An API that provides a communication interface between the front-end and your data (retrieve, create, delete, update them)

## First part

### The console

create your data model
manage (create, update, destroy, etc) objects via a console / command interpreter
store and persist objects to a file (JSON file)
The first piece is to manipulate a powerful storage system. This storage engine will give us an abstraction between “My object” and “How they are stored and persisted”. This means: from your console code (the command interpreter itself) and from the front-end and RestAPI you will build later, you won’t have to pay attention (take care) of how your objects are stored.

This abstraction will also allow you to change the type of storage easily without updating all of your codebase.

The console will be a tool to validate this storage engine

![](https://holbertonintranet.s3.amazonaws.com/uploads/medias/2018/6/815046647d23428a14ca.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUZGDONYM4%2F20200214%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20200214T151724Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=174e47c7f23b563a94a64d394f694c5c1f11bfba653a6907d6e7162d8a75e17c)

First step: Write a command interpreter to manage your AirBnB objects.
This is the first step towards building your first full web application: the AirBnB clone. This first step is very important because you will use what you build during this project with all other following projects: HTML/CSS templating, database storage, API, front-end integration…

Each task is linked and will help you to:

put in place a parent class (called BaseModel) to take care of the initialization, serialization and deserialization of your future instances
create a simple flow of serialization/deserialization: Instance <-> Dictionary <-> JSON string <-> file
create all classes used for AirBnB (User, State, City, Place…) that inherit from BaseModel
create the first abstracted storage engine of the project: File storage.
create all unittests to validate all our classes and storage engine

```


```