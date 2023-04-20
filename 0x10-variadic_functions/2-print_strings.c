#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_string prints strings,followed by new line
*@separator:The string to be printed between strings
*@n: The number of strings passed to the function 
*@...:Variable number of strings to be printed
*
*if separator is NULL it is not printed
*if one of the strings id (nil) error is printed instead
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
 char*str;
 unsigned int i;
 va_start(strings,n);
 for(i=0;i<n;i++)
   {
     str=va_arg(strings,char*);
     if(str==NULL)
       printf("(nil)");
     else
       printf("%s",str);
     if(i!=(n-1)&&separator!=NULL)
       printf("%s",separator);
   }
 printf("\n");
 va_end(strings);
}
 
