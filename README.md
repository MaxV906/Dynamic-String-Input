# Dynamic string input library for C

A simple dynamic string library written for C.

# Usage

### Create a char pointer
```C
char* new_string;
```

### Pass it's address to string_scanner function
```C
string_scanner(&new_string);
```

That's it. You can now input a string of any length. Don't forget to free the memory once you don't need the string anymore to avoid memory leaks.
```C
free(new_string);
```

# Installation

You can install the parser library by running the following commands:
```bash
sudo make install
```
