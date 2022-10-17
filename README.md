# C printf project

## NAME

- _printf

## SYNOPSIS

- #include "main.h"
- int _printf(const char *format, ...);


## DESCRIPTION

- The _printf() function produces output according to a format as described below.


- ### Format of The Format String

- The format string is a character string, beginning and ending in its initial shift state, if any.  The format string is composed
  of zero or more directives: ordinary characters (not %), which are copied unchanged to the output stream; and conversion
  specifications, each of which results in fetching zero or more subsequent arguments.  Each conversion specification is
  introduced by the character %, and ends with a conversion specifier.

- The arguments must correspond properly (after type promotion) with the conversion specifier.  By default, the arguments are
  used in the order given, where each '*' (see Field width and Precision below) and each conversion specifier asks for the next
  argument (and it is an error if insufficiently many arguments are given).  One can also specify explicitly which argument is taken,
  at each place where an argument is required, by writing "%m$" instead of '%' and "*m$" instead of '*', where the decimal
  integer m denotes the position in the argument list of the desired argument, indexed starting from 1.  Thus,

           printf("%*d", width, num);
       and

           printf("%2$*1$d", width, num);

       are equivalent.


- ### Conversion Specifiers
  A character that specifies the type of conversion to be applied. The conversion specifiers and their meanings are:

  d, i   The int argument is converted to signed decimal notation.

  c      The int argument is converted to an unsigned char, and the resulting character is written.

  s      The const char * argument is expected to be a pointer to an array of character type (pointer to a string).
         Characters from the array are written up to (but not including) a terminating null byte ('\0').

  %      A '%' is written.  No argument is converted.  The complete conversion specification is '%%'.


## RETURN VALUE

- Upon successful return, the function returns the number of characters printed (excluding the null byte used to end output to strings).
