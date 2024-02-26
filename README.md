<a name="readme-top"></a>
<div align="center">
  <!-- Logo -->
  <a href="https://github.com/dpetrosy/42-Printf">
  <img src="README_files/logo.png" alt="Logo" width="80" height="80">
  </a>

  <!-- Project Name -->
  <h1>Printf Project</h1>

  <!-- Short Description -->
  <p align="center">
	  <b>42 Yerevan Printf</b><br>
	  For further information about 42cursus and its projects, please refer to <a href="https://github.com/dpetrosy/42cursus"><b>42cursus repo</b></a>.
  </p>

  <!-- Badges -->
  <p>
    <img src="https://img.shields.io/badge/score-100%20%2F%20100-success?style=for-the-badge" />
    <img src="https://img.shields.io/github/repo-size/dpetrosy/42-Printf?style=for-the-badge&logo=github">
    <img src="https://img.shields.io/github/languages/count/dpetrosy/42-Printf?style=for-the-badge&logo=" />
    <img src="https://img.shields.io/github/languages/top/dpetrosy/42-Printf?style=for-the-badge" />
    <img src="https://img.shields.io/github/last-commit/dpetrosy/42-Printf?style=for-the-badge" />
  </p>

  <h3>
      <a href="#-about-project">📜 About Project</a>
    <span> · </span>
      <a href="#-supported-specifiers">📑 Supported Specifiers</a>
    <span> · </span>
      <a href="#-usage">👨‍💻 Usage</a>
  </h3>
</div>

---

## 📜 About Project

> _This project is pretty straight-forward. You will implement your own printf. You will mainly learn how to use variadic arguments._

For detailed information, refer to the [**subject of this project**](README_files/printf_subject.pdf).

	🚀 TLDR: This project consists of coding a library that contains a simplified version 
 		 of the printf function.

## 📑 Supported Specifiers

These specifiers are supported by my printf implementation.

| Specifier  | Short Description                                         |
|:----------:|:---------------------------------------------------------:|
| %c         | Print a single character.                                 |
| %s         | Print a string of characters.                             |
| %p         | The void * pointer argument is printed in hexadecimal.    |
| %d         | Print a decimal (base 10) number.                         |
| %i         | Print an integer in base 10.                              |
| %u         | Print an unsigned decimal (base 10) number.               |
| %x         | Print a number in hexadecimal (base 16), with lowercase.  |
| %X         | Print a number in hexadecimal (base 16), with uppercase.  |
| %%         | Print a percent sign.                                     |

## 👨‍💻 Usage
### Requirements

The library is written in C language and thus needs the **gcc compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling the library**

To compile the library, run:

```shell
$ cd path/to/printf && make
```

**2. Using it in your code**

To use the library functions in your code, simply include its header:

```C
#include "ft_printf.h"
```
and, when compiling your code, add the required flags:

```shell
-lftprintf -L path/to/libftprintf.a -I path/to/ft_printf.h
```
