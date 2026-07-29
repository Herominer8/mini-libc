[![GitHub stars](https://img.shields.io/github/stars/your-username/mini-libc)](https://github.com/your-username/mini-libc/stargazers)
[![GitHub forks](https://img.shields.io/github/forks/your-username/mini-libc)](https://github.com/your-username/mini-libc/network)
[![GitHub issues](https://img.shields.io/github/issues/your-username/mini-libc)](https://github.com/your-username/mini-libc/issues)

# 🏛️ Mini-LibC

> **A miniature C standard library written entirely in x86-64 Assembly**

![License](https://img.shields.io/badge/license-MIT-blue.svg)
![Language](https://img.shields.io/badge/language-Assembly-orange.svg)
![Platform](https://img.shields.io/badge/platform-Linux-lightgrey.svg)
![Status](https://img.shields.io/badge/status-stable-brightgreen.svg)

---

## 📖 Introduction

**Mini-LibC** is a small educational implementation of a subset of the C standard library, written entirely in **x86-64 Assembly**. This project is designed to provide a deep understanding of:

- How standard C functions work under the hood
- Low-level programming and assembly language
- Linux system calls
- Memory and stack management

---

## 🛠️ Implemented Functions

### 📝 String Functions

| Function | Description | Return |
|----------|-------------|--------|
| `ft_strlen` | Calculate string length | `size_t` |
| `ft_strcpy` | Copy a string | `char*` |
| `ft_strcmp` | Compare two strings | `int` |
| `ft_strdup` | Duplicate string with memory allocation | `char*` |

### 💾 Memory Functions

| Function | Description | Return |
|----------|-------------|--------|
| `ft_memset` | Fill memory with a constant byte | `void*` |
| `ft_bzero` | Zero out a memory region | `void` |
| `ft_memcpy` | Copy memory area | `void*` |
| `ft_memmove` | Copy memory area with overlap handling | `void*` |

### 🖥️ System Functions

| Function | Description | Return |
|----------|-------------|--------|
| `ft_write` | Write to a file descriptor (syscall) | `ssize_t` |
| `ft_read` | Read from a file descriptor (syscall) | `ssize_t` |

---

## 📂 Project Structure
mini-libc/
├── 📁 include/
│ └── libft.h # Library header file
├── 📁 src/
│ ├── ft_strlen.asm # strlen implementation
│ ├── ft_strcpy.asm # strcpy implementation
│ ├── ft_strcmp.asm # strcmp implementation
│ ├── ft_strdup.asm # strdup implementation
│ ├── ft_memset.asm # memset implementation
│ ├── ft_bzero.asm # bzero implementation
│ ├── ft_memcpy.asm # memcpy implementation
│ ├── ft_memmove.asm # memmove implementation
│ ├── ft_write.asm # write implementation
│ ├── ft_read.asm # read implementation
│ └── libft.a # Final static library
├── test.c # Test program
└── README.md # This file


---

## 🚀 Installation & Usage

### Prerequisites

- **NASM** (Netwide Assembler)
- **GCC** (GNU Compiler Collection)
- **Linux operating system** (x86-64)

### Installing NASM

```bash
# Debian/Ubuntu
sudo apt install nasm

# Fedora
sudo dnf install nasm

# Arch
sudo pacman -S nasm

Building the Library

# 1. Clone the project
git clone https://github.com/your-username/mini-libc.git
cd mini-libc

# 2. Build the library
cd src
nasm -f elf64 *.asm
ar rcs libft.a *.o
rm -f *.o
cd ..


Using in C Projects

#include "libft.h"

int main() {
    // Example usage
    char *str = ft_strdup("Hello, World!");
    ft_write(1, str, ft_strlen(str));
    ft_write(1, "\n", 1);
    free(str);
    return 0;
}

Compiling with the Library
gcc -no-pie your_program.c -Lsrc -lft -o your_program -Iinclude


Running Tests
# Compile and run the test program
gcc -no-pie test.c -Lsrc -lft -o test -Iinclude
./test

📊 Expected Test Output
🔵 TESTING MINI-LIBC 🔵

========================================
  FT_STRLEN
========================================
ft_strlen("Hello")     = 5
ft_strlen("")          = 0
ft_strlen("Hello World!") = 12
✅ ft_strlen passed!

========================================
  FT_STRCMP
========================================
ft_strcmp("abc", "abc") = 0 (should be 0)
ft_strcmp("abc", "abd") = -1 (should be -1)
ft_strcmp("abd", "abc") = 1 (should be 1)
✅ ft_strcmp passed!

========================================
  FT_MEMSET
========================================
ft_memset(buf, 'A', 10) = AAAAAAAAAA
✅ ft_memset passed!

========================================
  ALL TESTS PASSED! 🎉
========================================



🔧 Performance Considerations
Register Optimization: Minimal memory access, extensive use of CPU registers

Syscall Overhead: Direct system calls for I/O operations

Stack Management: Efficient push/pop operations

Memory Alignment: Proper handling of memory boundaries

🤝 Contributing
Contributions are welcome! Feel free to:

-Add new functions (e.g., ft_atoi, ft_calloc, ft_putstr)

-Optimize existing code with SIMD instructions

-Improve documentation

-Add more tests


How to Contribute
# Fork the repository
# Create a new branch
git checkout -b feature/new-function

# Make your changes
# Test thoroughly

# Submit a pull request

📄 License
This project is licensed under the MIT License - see the LICENSE file for details.

📚 Resources
NASM Documentation

System V AMD64 ABI

Linux Syscall Table

x86-64 Assembly Guide

⭐ Show Your Support
If you found this project helpful, please give it a ⭐ on GitHub!
