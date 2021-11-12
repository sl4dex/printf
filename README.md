# README

 **_printf**  project developed by Salvador Diaz and Santiago Negreyra


## _printf

**PROTOTYPE**

#include "main.h"

int  _printf(const  char *format, ... )
##
**DESCRIPTION**

_printf returns an integer containing the length of the printed string.

char *format is a character string containing  zero or more directives: ordinary characters (not **%**), which are copied unchanged to the output stream, and conversion specifications, each of which fetchs his respective argument.  Each conversion specification is introduced by the **%** character. 
The arguments must correspond properly with the conversion specifier.

## Format table

| Conversion Specification      | Description |
| ----------- | ----------- |
| %c      |  The _int_ argument is converted to an _unsigned_ _char_, and the resulting character is written       |
| %s   | Writes _char *_ argument|
| %d   | Writes _int_ argument as _char *_|
| %i   | same as %d|
| %b   | Writes _unsigned int_ argument to binary|
| %r   | Writes _char *_ in reverse|
