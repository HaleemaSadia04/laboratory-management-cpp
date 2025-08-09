# Laboratory Management System (C++ OOP)

A C++ program demonstrating **inheritance**, **method overriding**, and **encapsulation**  
through a base class `Laboratory` and derived classes `WetLab` and `DryLab`.

## Features
- Base class: `Laboratory` with name and location
- Derived classes:
  - `WetLab` → adds number of microscopes and scientist name
  - `DryLab` → adds number of computers and capacity
- Method overriding for `input()` and `show()`
- Encapsulation using getters and setters

## How to Run
1. Clone or download this repository.
2. Compile:
   ```bash
   g++ laboratory_management.cpp -o laboratory_management
