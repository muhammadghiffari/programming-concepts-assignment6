# 📚 Programming Concepts Assignment 6

<div align="center">

![C Programming](https://img.shields.io/badge/C-Programming-00599C?style=for-the-badge&logo=c&logoColor=white)
![Assignment](https://img.shields.io/badge/Assignment-6-brightgreen?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Completed-success?style=for-the-badge)

[![Ask DeepWiki](https://deepwiki.com/badge.svg)](https://deepwiki.com/muhammadghiffari/programming-concepts-assignment6)
![Lines of Code](https://img.shields.io/badge/Lines%20of%20Code-254-blue?style=flat-square)
![Files](https://img.shields.io/badge/Files-2-orange?style=flat-square)
![Language](https://img.shields.io/badge/Language-C-A8B9CC?style=flat-square&logo=c)
![License](https://img.shields.io/badge/License-Educational-yellow?style=flat-square)

**String Manipulation & Pointer Operations in C**

Built by **Muhammad Ghiffari** ([@muhammadghiffari](https://github.com/muhammadghiffari)) and **Fhutka Hiban Dairoby** ([@hicesse](https://github.com/hicesse))

[Overview](#-overview) • [Programs](#-programs) • [Installation](#-installation) • [Usage](#-usage)

</div>

---

## 📋 Table of Contents

- [Overview](#-overview)
- [Programs](#-programs)
  - [Problem 1: Simple Name Editor System](#problem-1-simple-name-editor-system)
  - [Problem 2: Temperature Analysis System](#problem-2-temperature-analysis-system)
- [Features Comparison](#-features-comparison)
- [Installation](#-installation)
- [Usage](#-usage)
- [Technical Details](#-technical-details)
- [Team](#-team)

---

## 🌟 Overview

This repository contains two C programs demonstrating contrasting programming paradigms and advanced concepts. Each program showcases different approaches to memory management, string manipulation, pointer operations, and control flow structures.

**Assignment Requirements**: Choose 2 out of 3 problems focusing on:
- Pointer operations and memory management
- String manipulation and character operations
- Dynamic memory allocation (malloc/free)
- Function modularization
- Input validation and error handling
- Control flow structures

---

## 💻 Programs

### Problem 1: Simple Name Editor System

**File**: `asikmen 6.c` | **Lines**: 184 | **Architecture**: Interactive Menu-Driven

An interactive string manipulation system with heap memory management and stateful operations.

#### Key Features
- ✅ Interactive menu with 6 options
- ✅ Dynamic heap allocation (malloc/free)
- ✅ String transformation (lowercase, uppercase, reset)
- ✅ Character-by-character display
- ✅ Input validation (no digits allowed)
- ✅ State preservation across operations
- ✅ Memory-safe operations

#### Functions
```c
void greet()                           // Display menu
void curMem(char*)                     // Show current name state
void lowcase(char*)                    // Convert to lowercase
void upcase(char*)                     // Convert to uppercase
void reset(char*, char*)               // Reset to original
void printChar(char*)                  // Display character by character
int hasDigit(const char*)              // Validate input (no digits)
```

#### Usage Flow
```
1. Input or change name
   → Stored in namaOri and namaCur (heap-allocated)
   → Validates no digits in name
   
2. Convert to lowercase
   → Modifies namaCur using tolower()
   
3. Convert to uppercase
   → Modifies namaCur using toupper()
   
4. Reset to original
   → Restores namaCur from namaOri
   
5. Print character by character
   → Displays: "hello" → "h e l l o"
   
6. Exit program
   → Frees allocated memory
```

#### Memory Architecture
```
Stack:                  Heap:
┌─────────────┐        ┌──────────────┐
│ flag        │        │ namaOri[100] │ ◄── Original name
│ counter     │        └──────────────┘
│ choose      │        ┌──────────────┐
│ *namaOri ───┼───────►│ namaCur[100] │ ◄── Current/modified
│ *namaCur ───┼───────►└──────────────┘
└─────────────┘
```

---

### Problem 2: Temperature Analysis System

**File**: `problem2-AnalyzeTemperature.c` | **Lines**: 70 | **Architecture**: Linear Pipeline

A batch processing system for temperature analysis using pointer arithmetic and stack allocation.

#### Key Features
- ✅ Linear sequential execution
- ✅ Pointer-based array traversal
- ✅ Automatic average calculation
- ✅ Weather condition classification
- ✅ Three-phase processing pipeline
- ✅ Stack-only memory allocation

#### Functions
```c
int main()              // Single main function containing all logic
// Uses pointer arithmetic for array operations
```

#### Usage Flow
```
Input Phase (Loop 1)
  → Enter 5 temperatures (float values)
  → Stores in temps[5] array
  
Processing Phase (Loop 2)
  → Pointer traversal: pTemp = temps
  → Calculate sum using *pTemp++
  → Calculate average: sum / 5.0
  
Analysis Phase (Conditional)
  → Classify weather based on average:
    • average ≤ 50.0  → "cold"
    • 50.0 < average ≤ 80.0 → "warm"
    • average > 80.0 → "hot"
  
Output Phase (Loop 3)
  → Display all temperatures using pointer
  → Format: "temperatures: 72 68 75 80 65"
```

#### Processing Pipeline
```
Phase 1: INPUT          Phase 2: PROCESS       Phase 3: OUTPUT
┌──────────┐           ┌──────────┐           ┌──────────┐
│ for i=0  │           │ pTemp =  │           │ printf   │
│   to 4   │──────────►│ temps    │──────────►│ average  │
│ scanf    │           │ sum +=   │           │ & temps  │
│ temps[i] │           │ *pTemp++ │           │ via ptr  │
└──────────┘           └──────────┘           └──────────┘
```

---

## 🔄 Features Comparison

| Feature | Problem 1 (Name Editor) | Problem 2 (Temperature) |
|---------|------------------------|------------------------|
| **Execution Model** | Interactive event loop | Linear single-pass |
| **Data Type** | String (char*) | Float array (float[]) |
| **Memory Strategy** | Heap allocation (malloc) | Stack allocation |
| **Memory Management** | Manual (free required) | Automatic (scope-based) |
| **Array Traversal** | Index-based (for loop) | Pointer arithmetic |
| **Control Structure** | do-while + switch | 3 sequential for-loops |
| **State Management** | Stateful (flag variable) | Stateless |
| **Data Preservation** | Dual arrays (original + current) | Single array (immutable) |
| **User Control** | High (menu-driven) | Low (automated pipeline) |
| **Input Validation** | Custom function (hasDigit) | scanf return value |
| **Function Count** | 7 functions | 1 function (main) |
| **Program Flow** | Dynamic, user-driven | Fixed, predetermined |
| **Data Mutability** | Mutable via transformations | Immutable after input |
| **Memory Lifetime** | Session-persistent | Processing-only |

---

## 🚀 Installation

### Prerequisites
- Embarcadero Dev-C++ (or any C compiler)
- Terminal/Command Prompt
- Basic C programming knowledge

### Compilation

**For Name Editor:**
```bash
gcc asikmen6.c -o name_editor
./name_editor
```

**For Temperature Analysis:**
```bash
gcc problem2-AnalyzeTemperature.c -o temp_analysis
./temp_analysis
```

---

## 📖 Usage

### Example: Simple Name Editor System

```
====================================
 Welcome to the Simple Name Editor
====================================

[ you're not input any name yet ]

== Choose menu here ==
1. input or change name
2. make the name into lowercase
3. make the name into uppercase
4. reset into original value
5. print the name each the characters
6. exit
Choose: 1
Enter your name: John Doe
Name saved successfully.

[ John Doe ]

== Choose menu here ==
Choose: 2

[ john doe ]

== Choose menu here ==
Choose: 3

[ JOHN DOE ]

== Choose menu here ==
Choose: 4

[ John Doe ]

== Choose menu here ==
Choose: 5
J o h n   D o e 

== Choose menu here ==
Choose: 6
Thank you for using the service
```

### Example: Temperature Analysis System

```
enter 5 temperatures: 72 68 75 80 65
average temperature: 72.00
weather summary: warm
temperatures: 72 68 75 80 65
```

**Different Weather Conditions:**
```
Input: 45 40 48 52 35
Output: 
average temperature: 44.00
weather summary: cold
temperatures: 45 40 48 52 35

Input: 85 90 88 92 95
Output:
average temperature: 90.00
weather summary: hot
temperatures: 85 90 88 92 95
```

---

## 🔧 Technical Details

### Memory Management Strategies

#### Heap Allocation (Problem 1)
```c
// Allocate memory on heap
char *namaOri = malloc(SIZE * sizeof(*namaOri));
char *namaCur = malloc(SIZE * sizeof(*namaCur));

// Use throughout program...

// Free memory before exit
free(namaOri);
free(namaCur);
```

#### Stack Allocation (Problem 2)
```c
// Automatic allocation on stack
float temps[5];
float *pTemp;

// Memory automatically freed when function returns
```

### String Manipulation Techniques

#### Case Conversion
```c
// Lowercase conversion
void lowcase(char* x) {
    for(int i = 0; x[i] != '\0'; i++) {
        x[i] = tolower(x[i]);
    }
}

// Uppercase conversion
void upcase(char* y) {
    for(int i = 0; y[i] != '\0'; i++) {
        y[i] = toupper(y[i]);
    }
}
```

#### String Operations
```c
// Copy string
void reset(char* r, char* o) {
    strcpy(r, o);
}

// Character-by-character output
void printChar(char* s) {
    for(int i = 0; s[i] != '\0'; i++) {
        printf("%c ", s[i]);
    }
    printf("\n");
}
```

### Pointer Arithmetic (Problem 2)

```c
// Phase 1: Initialize pointer
float *pTemp;
pTemp = temps;  // Points to temps[0]

// Phase 2: Traverse and sum
for (i = 0; i < 5; i++) {
    sum = sum + *pTemp;  // Dereference to get value
    pTemp++;             // Move to next element
}

// Phase 3: Reset and display
pTemp = temps;  // Reset to beginning
for (i = 0; i < 5; i++) {
    printf("%.0f ", *pTemp);
    pTemp++;
}
```

**Pointer Progression:**
```
Iteration 0: pTemp → temps[0] → *pTemp = 72
Iteration 1: pTemp → temps[1] → *pTemp = 68
Iteration 2: pTemp → temps[2] → *pTemp = 75
Iteration 3: pTemp → temps[3] → *pTemp = 80
Iteration 4: pTemp → temps[4] → *pTemp = 65
```

### Input Validation Strategies

**Problem 1**: Custom digit detection
```c
int hasDigit(const char *s) {
    for(int i = 0; s[i] != '\0'; i++) {
        if(isdigit(s[i])) return 1;
    }
    return 0;
}

// Usage
if(hasDigit(namaOri)) {
    printf("\n|| Error: name cannot contain numbers.|| \n");
    break;
}
```

**Problem 2**: scanf return value check
```c
if (scanf("%f", &temps[i]) != 1) {
    return 0;  // Exit on invalid input
}
```

### State Management (Problem 1)

```c
int flag = 0;      // Input state (0=no data, 1=has data)
int counter = 1;   // Loop controller (0=exit, 1=continue)
int choose;        // Menu selection
```

**Operation Guards:**
```c
case 2:  // Lowercase
    if(flag) {
        lowcase(namaCur);
    } else {
        printf("please input your name first!\n");
    }
    break;
```

### Control Flow Architectures

**Problem 1**: Event Loop Pattern
```c
do {
    if(flag) curMem(namaCur);
    else printf("[ you're not input any name yet ]\n");
    
    greet();
    scanf("%d", &choose);
    
    switch(choose) {
        case 1: /* input */ break;
        case 2: /* lowercase */ break;
        case 3: /* uppercase */ break;
        case 4: /* reset */ break;
        case 5: /* print chars */ break;
        case 6: counter = 0; break;  // Exit
        default: /* error */ break;
    }
} while (counter != 0);
```

**Problem 2**: Pipeline Pattern
```c
// Phase 1: Input
for (i = 0; i < 5; i++) { scanf("%f", &temps[i]); }

// Phase 2: Process
for (i = 0; i < 5; i++) { sum += *pTemp++; }
average = sum / 5.0;

// Phase 3: Output
if (average <= 50.0) printf("cold\n");
else if (average <= 80.0) printf("warm\n");
else printf("hot\n");

for (i = 0; i < 5; i++) { printf("%.0f ", *pTemp++); }
```

---

## 👥 Team

<div align="center">

| Name | GitHub | Role |
|------|--------|------|
| Muhammad Ghiffari | [@muhammadghiffari](https://github.com/muhammadghiffari) | Developer |
| Fhutka Hiban Dairoby | [@hicesse](https://github.com/hicesse) | Developer |

</div>

---

## 📝 Assignment Context

**Course**: Programming Concepts  
**Assignment**: Assignment 6 - Pointers & Strings  
**Problems Selected**: Problem 1 (Name Editor) & Problem 2 (Temperature Analysis)  
**Language**: C Programming

### Learning Objectives Achieved
✅ Pointer operations and arithmetic  
✅ Dynamic memory allocation (malloc/free)  
✅ String manipulation and character operations  
✅ Memory management strategies (heap vs stack)  
✅ Input validation techniques  
✅ State management and control flow  
✅ Function modularization and parameter passing  
✅ Contrasting architectural paradigms

### Key Concepts Demonstrated

| Concept | Problem 1 | Problem 2 |
|---------|-----------|-----------|
| **Pointers** | String pointers (char*) | Array pointer arithmetic |
| **Memory** | Heap (malloc/free) | Stack (automatic) |
| **Strings** | Manipulation (tolower/toupper) | N/A (numeric data) |
| **Control Flow** | do-while + switch | Sequential for-loops |
| **Validation** | Custom function | scanf return check |
| **State** | Persistent (flag-based) | Ephemeral (single-pass) |

---

## 📄 License

This project is created for educational purposes as part of academic coursework.

---

<div align="center">

**Made with 💻 for Programming Concepts Subject**

[![Made with C](https://img.shields.io/badge/Made%20with-C-00599C?style=flat-square&logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C_(programming_language))

</div>
