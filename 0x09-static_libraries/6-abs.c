#include "main.h"
  2 
  3 /**
  4   *_abs -  computes the absolute value of an integer.
  5   *@n:the int to  check
  6   *Return: the absolte value of int
  7   */
  8 int _abs(int n)
  9 {
 10         if (n >= 0)
 11         {
 12                 return (n);
 13         }
 14         else
 15         {
 16                 return (-n);
 17         }
 18         return (0);
 19 }
