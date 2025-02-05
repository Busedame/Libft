# 🎉 **Libft - First Project in the Core Curriculum of 42Berlin!**

## 🚀 **Project Overview**  
The project aims to get a deeper understanding of what is happening under the hood of the standard functions in C, like `calloc`, `strlcat`, `memmove`, etc. My functions are equivalent to their corresponding functions, except for handling `errno` statuses. Some of the functions are not standard functions in C, but still very useful!  

💡 **Note**: Weaknesses with the original functions – like not checking for `NULL` in `strlen`, and returning `0` from `atoi` upon error – still remain in my functions. The goal was to create copies of the functions as they are, **not improve them**.

---

## 🧰 **Included Files**  
- All the functions.
- A `Makefile`.
- A header file.
- A test.c file with implementations of simple tests for each function.

---

## 🧑‍💻 **Cloning the Repository**

To get started, first clone the repository to your local machine.
This command will clone the repo, and move to the right directory.
```bash
git clone https://github.com/busedame/libft/ Libft && cd Libft
```
---

## 🖥️ **How to Compile and Run**  

### 💻 **Linux**  
1. **Compile the library**:  
   Run the following command to compile the library:  
   ```bash
   make
2. **Compile and run test**  
   Run the tests using:  
   ```bash
   make test

### 🍏 **Mac**  
Ran into some issues trying to compile on my MacBook, but found a fix.

**Step 1**  
- Remove `#include <bsd/string.h>` from the header file.  
- Remove the `-lbsd` flag from the `Makefile`.

**Step 2**  
- **Compile the library or tests**  
   Run either of the following commands:  
   ```bash
   make
   make test
