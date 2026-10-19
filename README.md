# C++ Basics

A beginner-friendly collection of C++ examples and exercises, organized by topic as I learn programming fundamentals.

The code in this repository reflects my learning progress. Some files contain commented examples or multiple exercises in one file, so not every file is intended to compile as a standalone program without adjustments.

## Repository Structure

```text
cpp-basics/
├── 01-basics/
│   ├── variables.cpp
│   ├── user-input.cpp
│   └── data-type-conversion.cpp
├── 02-operators/
│   ├── relational-operators.cpp
│   ├── logical-operators.cpp
│   └── increment-decrement.cpp
├── 03-control-flow/
│   ├── if-else.cpp
│   └── switch-case.cpp
├── 04-enums/
│   ├── enums.cpp
│   ├── enums-with-if.cpp
│   └── nested-functions-with-enums.cpp
├── 05-strings-and-math/
│   ├── strings.cpp
│   └── math-functions.cpp
├── 06-functions/
│   ├── procedures-and-functions.cpp
│   ├── functions-practice-1.cpp
│   └── functions-homework.cpp
├── 07-structures/
│   ├── structures.cpp
│   └── arrays-of-structures.cpp
├── 08-exercises/
│   └── exercises.cpp
└── README.md
```

## Topics Covered

| Section | What you'll find |
|---|---|
| Basics | Variables, data types, input, and type conversion |
| Operators | Relational, logical, increment, and decrement operators |
| Control flow | `if/else` conditions and `switch` statements |
| Enums | Enumerations and examples using conditions and functions |
| Strings and math | String operations and common math functions |
| Functions | Functions, procedures, and practice tasks |
| Structures | `struct` and arrays of structures |
| Exercises | Combined practice problems and homework |

## Compile and Run

You'll need a C++ compiler such as **g++** (GCC or MinGW).

From the repository root, compile one source file by using its path:

```bash
g++ 01-basics/variables.cpp -o variables
```

Run it on Windows:

```powershell
.\variables.exe
```

Run it on Linux or macOS:

```bash
./variables
```

Replace the example path with the file you want to practise. If compilation fails, check whether that file contains more than one `main()` function, unfinished exercises, or missing headers.

## Suggested Learning Order

1. Variables, data types, and user input
2. Type conversion
3. Relational and logical operators
4. Conditions and switch statements
5. Enums
6. Strings and math functions
7. Functions and procedures
8. Structures and arrays of structures
9. Exercises and review

## Notes

- The files have been grouped and renamed for clarity; their original code contents are preserved.
- Filenames use lowercase words separated by hyphens for consistency.
- This is a learning repository, so examples may be incomplete or contain mistakes that I will correct as I progress.

---

**Language:** C++  
**Purpose:** Learning, practice, and problem-solving
