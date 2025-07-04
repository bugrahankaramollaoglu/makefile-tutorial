# 🛠️ Makefile Tutorial

This repository provides a progressive tutorial on using **Makefiles**, starting from basic examples to more advanced patterns used in real-world C projects. It is designed to help C developers understand how to automate compilation and manage project structure effectively.

📄 Also check out my full [Makefile Tutorial Notes on Medium](https://medium.com/@bugrakaramollaoglu/makefile-tutorial-e95b25078633)

---

## 📚 Topics Covered

Each directory in this repository represents a lesson or concept in Makefile usage:

### 1️⃣ Basic Makefile
- A minimal Makefile to compile a single C file.
- ✅ Targets: `all`, `clean`
➡️ [`1_basic/`](1_basic)

### 2️⃣ Multiple Source Files
- Compile a program using multiple `.c` source files.
➡️ [`2_multipleSources/`](2_multipleSources)

### 3️⃣ Using Variables
- Introduces variables like `SRCS` and `CFLAGS` to avoid repetition.
➡️ [`3_srcs/`](3_srcs)

### 4️⃣ Object Files & Pattern Rules
- Uses pattern rules to compile `.c` into `.o` and link them.
➡️ [`4_objs/`](4_objs)

### 5️⃣ Organizing with Subdirectories
- Source, include, and object files in separate folders.
- Makes use of `wildcard`, `patsubst`, and directory variables.
➡️ [`5_subdirectories/`](5_subdirectories)

### 6️⃣ .PHONY Targets
- Avoid filename conflicts using `.PHONY`.
➡️ [`6_phony/`](6_phony)

### 7️⃣ Conditional Compilation
- Add debug flags with `make DEBUG=1`.
➡️ [`7_conditions/`](7_conditions)

### 8️⃣ Automatic Variables
- Use of `$@`, `$<`, `$^`, and `$?` to streamline rules.
➡️ [`8_automaticVariables/`](8_automaticVariables)

### 9️⃣ Implicit Rules
- Reduce redundancy with built-in Makefile rules.
➡️ [`9_implicitRules/`](9_implicitRules)

### 🔟 Wildcards and File Globbing
- Demonstrates use of `wildcard()` and pattern matching.
➡️ [`10_wildcards/`](10_wildcards)

### 🔁 Nested Makefiles
- Shows how to integrate external libraries like `libft` using nested `make` calls.
➡️ [`11_nestedMakefiles/`](11_nestedMakefiles)

---

## 🧠 Prerequisites

- Basic knowledge of **C programming**
- Familiarity with the terminal (Linux/macOS)
- `make` utility installed

---

## 🚀 Getting Started

To try out each lesson:

```bash
cd <lesson_directory>
make        # build the program
make clean  # clean compiled files

