# 📦 C++ Modules (CPP00 – CPP09)

## Description
The C++ Modules are a series of projects developed as part of the 42 curriculum.  
Their goal is to introduce modern C++ concepts progressively, focusing on object-oriented programming, memory management, and good design practices.  
Each module builds upon the previous ones, gradually increasing complexity and introducing new language features.

<br/>

## Covered Modules

This repository includes the following modules:

- **CPP00** — Basics of C++, namespaces, classes, member functions, and I/O streams  
- **CPP01** — Memory allocation, references, pointers, and object lifecycle  
- **CPP02** — Ad-hoc polymorphism, operator overloading, and canonical form  
- **CPP03** — Inheritance and basic polymorphism  
- **CPP04** — Subtype polymorphism, abstract classes, and interfaces  
- **CPP05** — Exceptions and error handling  
- **CPP06** — C++ type casting operators  
- **CPP07** — Templates and generic programming  
- **CPP08** — Templated containers, iterators, and algorithms  
- **CPP09** — STL containers and advanced data structures  

<br/>

## Project Objectives

- Learn the fundamentals of C++
- Understand object-oriented programming concepts
- Apply proper memory management
- Follow the Orthodox Canonical Form
- Write clean, modular, and maintainable code
- Respect the constraints and norms defined by 42

<br/>

## Repository Structure

Each module is contained in its own directory:
Module_00/
Module_01/
Module_02/
Module_03/
Module_04/
Module_05/
Module_06/
Module_07/
Module_08/
Module_09/

Inside each directory, exercises are organized according to the subject specifications provided by 42.

<br/>

## Compilation

Each exercise includes its own Makefile.  
To compile an exercise, navigate to its directory and run:

```bash
make
```

Additional rules (when available):

```bash
make clean    # Remove object files
make fclean   # Remove object files and binary
make re       # Recompile from scratch
```

<br/>

##  Notes & Disclaimer

> These projects follow the strict rules and constraints imposed by the 42 curriculum.

- The C++ standard used is **C++98** — modern features (C++11 and beyond) are **not allowed**
- The use of the STL is restricted in certain modules (e.g., CPP05–CPP08)
- `printf`, `malloc`, `free`, and other C functions are **forbidden** unless explicitly allowed
- All classes must follow the **Orthodox Canonical Form** where applicable
- Memory leaks are not tolerated — all allocated memory must be properly freed

<br/>
