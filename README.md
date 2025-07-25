# 🔬 C++ Experiment 2  
## **Study and Implementation of Data Types & Storage Classes**

---

### 🎯 Aim

To:

- Understand and utilize different **C++ data types**
- Explore storage classes: `auto`, `static`, `extern`, `register`
- Learn about **variable scope**, lifetime, and memory allocation using `sizeof`

---

### 📌 Learning Objectives

- ✅ Apply different **storage classes** to observe how they behave
- ✅ Understand the **scope**, **storage**, and **default values** of each storage class
- ✅ Use the `sizeof()` operator to measure memory allocation

---

### 🧾 Program Summary

- A user-defined function is used to illustrate variable behavior with different storage classes  
- The `main()` function invokes the user-defined function multiple times  
- The `sizeof` operator is used to determine memory usage of different data types  

---

### 🛠️ Tools & Concepts Used

- **Storage Classes**: `auto`, `static`, `extern`, `register`
- **Data Types**: `int`, `float`, `char`, `bool`, `short`, `long`, `double`
- **Operators**: `sizeof()` to analyze memory usage

---

## 📚 Theory

### 🔹 Data Types in C++

In C++, **data types** specify the type of data a variable holds, and how much memory it consumes. Proper understanding ensures efficient programming.

| Data Type | Typical Size (Bytes) | Example Code          |
|-----------|----------------------|------------------------|
| `int`     | 4                    | `int x = 5;`           |
| `float`   | 4                    | `float f = 3.2;`       |
| `double`  | 8                    | `double d = 2.718;`    |
| `char`    | 1                    | `char c = 'A';`        |
| `bool`    | 1                    | `bool b = true;`       |
| `short`   | 2                    | `short s = 10;`        |
| `long`    | 8                    | `long l = 100000;`     |

> ⚠️ *Note: Actual memory size may vary depending on compiler and system architecture (32-bit vs 64-bit).*

---

### 🔹 The `sizeof()` Operator

- Used to determine the memory occupied by a data type or variable.
- Important for memory optimization and system-level programming.

---

## 🗂️ Storage Classes in C++

### 🔸 auto

- **Default** for local variables  
- **Scope**: Local to function/block  
- **Lifetime**: Ends with block  
- **Default Value**: Garbage (undefined)

### 🔸 static

- Retains value between function calls  
- **Scope**: Local  
- **Lifetime**: Entire program duration  
- **Default Value**: 0

### 🔸 extern

- Refers to a **global variable** declared elsewhere  
- **Scope**: Global  
- Used to share variables between multiple files  

### 🔸 register

- Suggests variable to be stored in CPU register  
- **Faster access** (compiler may ignore the suggestion)  
- **Scope**: Local  
- **Cannot be accessed using `&` (no memory address)**

---

## ✅ Conclusion

- Demonstrated how **storage classes** affect variable scope, lifetime, and initialization
- Reinforced understanding of **C++ data types** and memory usage through the `sizeof` operator
- Highlighted the importance of choosing correct data types and storage classes for better performance and resource management

---
