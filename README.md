# Dynamic string input library for C

A simple dynamic string library written for C.

# Usage

After installation include input.h in your headers
```C
#include <input.h>
```

When compiling add -linput to your gcc arguments
```C
gcc example.c -o example -linput
```

### Create a char pointer and assign it to the output of the "input" function
```C
char* new_string = input();
```

That's it. You can now input a string of any length. Don't forget to free the memory once you don't need the string anymore to avoid memory leaks.
```C
free(new_string);
```

# Installation

You can install the parser library by running the following commands:
```bash
make
sudo make install
```
