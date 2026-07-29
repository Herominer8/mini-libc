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
