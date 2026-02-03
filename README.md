# Task Management System (C++)

## About the Project
This is a console-based Task Management Backend written in C++.
The project focuses on implementing basic backend logic such as adding,
viewing, updating, and deleting tasks using a menu-driven approach.

The main goal of this project is to understand how CRUD operations work
internally without using any frontend or database.

All interactions happen through the terminal.



## Features
- Add a task with:
  - Task ID
  - Title
  - Priority (low / medium / high)
  - Status (pending / done)
- View all tasks
- Update an existing task using task ID
- Delete a task using task ID
- Menu-driven user interaction
- Handles edge cases like:
  - Empty task list
  - Invalid task ID
  - Wrong menu choice



## Concepts Used
- C++ Object-Oriented Programming
- Classes and constructors
- STL vector container
- Functions for modular design
- Loops and conditional statements
- Console input handling using cin and getline



## How to Run the Project

Compile the program: 
g++ main.cpp -o app

Run the executable:
.\app.exe
