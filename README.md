# C++ Logic Building — 100 Programs

A structured collection of **100 C++ programs** created to strengthen programming fundamentals, logical thinking, and problem-solving skills. The repository progresses from basic C++ concepts to number logic, patterns, functions, arrays, strings, Object-Oriented Programming (OOP), and the Standard Template Library (STL).

This project is part of my continuous learning journey in C++ and will potentially expand to include Data Structures and Algorithms (DSA) problems in the future.

## Project Overview

- **Language:** C++
- **C++ Standard:** C++17
- **Total Programs:** 100
- **Organization:** Topic-wise directories
- **Compiler:** GCC (`g++`)
- **Status:** 100 programs written and syntax-checked

## Topics Covered

| No. | Topic | Program Range | Count |
|---:|---|---|---:|
| 1 | C++ Fundamentals | 001–015 | 15 |
| 2 | Conditional Statements | 016–030 | 15 |
| 3 | Loops | 031–045 | 15 |
| 4 | Number Logic | 046–055 | 10 |
| 5 | Pattern Printing | 056–065 | 10 |
| 6 | Functions and Recursion | 066–075 | 10 |
| 7 | Arrays | 076–085 | 10 |
| 8 | Strings | 086–093 | 8 |
| 9 | OOP and STL | 094–100 | 7 |
| | **Total** | **001–100** | **100** |

## Repository Structure

```text
cpp-logic-building/
├── basics/
│   ├── README.md
│   └── 001–015: C++ fundamentals
├── conditionals/
│   ├── README.md
│   └── 016–030: Conditional statements
├── loops/
│   ├── README.md
│   └── 031–045: Loops
├── number_logic/
│   ├── README.md
│   └── 046–055: Number problems
├── patterns/
│   ├── README.md
│   └── 056–065: Pattern printing
├── functions/
│   ├── README.md
│   └── 066–075: Functions and recursion
├── arrays/
│   ├── README.md
│   └── 076–085: Array problems
├── strings/
│   ├── README.md
│   └── 086–093: String problems
├── oop/
│   ├── README.md
│   └── 094–100: OOP and STL
└── README.md
```

Each topic directory contains standalone C++ source files. Its `README.md` will provide a numbered list of the problems and their corresponding source filenames.

## Skills Practiced

### C++ Fundamentals
- Variables, data types, operators, and input/output
- Arithmetic operations and type conversions
- Swapping values and basic calculations

### Conditional Statements and Loops
- `if`, `else if`, `else`, and `switch`
- `for`, `while`, and iterative problem-solving
- Number properties and mathematical calculations

### Number Logic and Patterns
- Prime, Armstrong, perfect, and strong numbers
- GCD, LCM, factorial, Fibonacci, and digit operations
- Star patterns, number patterns, and triangles

### Functions and Recursion
- Function parameters and return values
- Reusable problem-solving logic
- Pass by value and pass by reference
- Recursive factorial, power, and Fibonacci calculations

### Arrays and Strings
- Array traversal and aggregation
- Minimum, maximum, searching, and sorting
- Reversing arrays and merging sorted arrays
- String manipulation, palindrome checks, and anagrams
- Character frequency and non-repeating characters

### Object-Oriented Programming and STL
- Classes, objects, and constructors
- Destructors and inheritance
- Function overloading
- `vector` for dynamic collections
- `map` for frequency counting
- A menu-driven student record system

## Requirements

To compile and run the programs, you need:

- A C++ compiler with C++17 support
- GCC/G++ recommended
- A terminal or command-line environment
- A code editor such as Visual Studio Code (optional)

## Compile and Run a Program

Clone the repository:

```bash
git clone https://github.com/Choudhary-Harish/cpp-logic-building.git
cd cpp-logic-building
```

Compile an individual program:

```bash
g++ -std=c++17 -Wall -Wextra basics/hello_world.cpp -o /tmp/cpp_program
```

Run it:

```bash
/tmp/cpp_program
```

To run a different program, replace `basics/hello_world.cpp` with its source file path.

The programs are independent, so compile and run each one separately.

## Syntax Verification

The source files can be checked using GCC without generating executable files inside the repository.

Run the following command from the repository root:

```bash
find basics conditionals loops number_logic patterns functions arrays strings oop \
  -maxdepth 1 -type f -name "*.cpp" -print0 |
while IFS= read -r -d '' file; do
    echo "Checking $file"
    g++ -std=c++17 -Wall -Wextra -fsyntax-only "$file" || exit 1
done
```

This checks whether each source file compiles syntactically and reports compiler warnings. It does **not** replace runtime testing or prove that every program handles all possible inputs correctly.

## Learning Approach

The repository follows a progressive approach:

1. Understand basic C++ syntax and operations.
2. Practice conditions, loops, and mathematical logic.
3. Build reusable solutions with functions and recursion.
4. Solve array and string manipulation problems.
5. Apply OOP principles and use STL containers.
6. Test programs, review mistakes, and improve implementations.

## Future Plans

This repository may expand beyond the initial 100 programs as I continue improving my C++ and problem-solving skills.

Potential future additions include:

- **Data Structures and Algorithms (DSA)**
- Time and space complexity analysis
- Searching and sorting algorithms
- Linked lists, stacks, and queues
- Hashing and hash-based problems
- Trees and graphs
- Recursion and backtracking
- Greedy algorithms
- Dynamic programming
- Competitive programming problems

These topics are planned possibilities, not part of the current 100-program milestone. They may be added progressively in future learning phases.

## Project Status

- [x] 100 C++ source programs created
- [x] Programs organized by topic
- [x] All 100 source files passed the C++17 syntax check
- [ ] Individual runtime testing and edge-case review
- [ ] Topic-wise problem indexes in each directory
- [ ] Future DSA problem collection

## Purpose

The goal of this repository is to develop a stronger foundation in C++, improve logical thinking, and maintain an organized record of programming practice.

It is a learning project that will continue evolving as new concepts and problem-solving techniques are explored.

---

**Author:** [Harish Choudhary](https://github.com/Choudhary-Harish)
**GitHub Repository:** [cpp-logic-building](https://github.com/Choudhary-Harish/cpp-logic-building)
**Language:** C++
**Standard:** C++17
**Current Milestone:** 100 Programs
