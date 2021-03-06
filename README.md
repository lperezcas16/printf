<div align="center"><img src="image_readme.gif" width="700" height="300" />

# _printf
This project contains a mini version of the printf function that we can find in the library <stdio.h>, if we are using the C programming language. The printf function basically allows us to print any argument given to standard or terminal output. This means that we can print any combination of strings, integers, and other different data type </div>
## RESOURCES :books:
 Read or watch
* [Secrets of "printf."](https://www.cypress.com/file/54761/download)
* [Secrets of printf(): C Programming.](https://www.youtube.com/watch?v=Y9kUWsyyChk&t=319s)
* [How to write C functions with variable argument lists..](https://www.youtube.com/watch?v=S-ak715zIIE)
---
## Compilation :computer:

 The code will be compiled this way:

```bash
$ gcc -Wall -Werror -Wextra -pedantic *.c
```
---
## Usage :mag_right:

 You can use the prototype:
```c
 int _printf(const char *format, ...).
```
 The flags that  you can use whit the _printf:

 FLAG   | ACTION
------------- | -------------
  %c  | Prints a Character
  %d - %i | Prints an Integer
  %b  | Prints a Binary.
  %u  | Prints an Unsigned Integer.
  %o  | Prints an Octal representaction of integer.
  %x  | Prints a Hexadecimal representation of unsigned integer \(lower case\).
  %X  | Prints a Hexadecimal representation of unsigned integer \(upper case\).
  %s  | Print a String.

---
## EXAMPLES :floppy_disk:

CHAR:
```C
_printf("Character:[%c]\n", 'H');
```
OUTPUT:
```C
CHARACTER:[H]
```

STRING:
```C
_printf("String:[%s]\n", "I am a string !");
```
OUTPUT
```C
String:[I am a string !]
```

INTEGER - unsigned int - double
```C
_printf("Numbers: [%i] [%d] [%u] ", 1, 2, 3);
```
OUTPUT
```C
Numbers: [1] [2] [3]
```



---

  ### AUTHORS
  * **Valeria Trujillo Rodriguez** - [valeria2426](https://github.com/valeria2426) :sunflower:
  * **Laura Perez** - [Lperezcas16](https://github.com/lperezcas16) :cat:
