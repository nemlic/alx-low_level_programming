#ifndef _MAIN_H
#define _MAIN_H

/**
  *_putchar - writes the character c to stdout
  * @c: The character to print
  * Return: On success 1.
  * On error, -1 is returned, and error is set appropriately.
  */

int _putchar(char c);

/**
  *_isupper - checks for uppercase characters
  *@c: character to be checked
  *Return: 1 if true otherwise 0
  */
int _isupper(int c);

/**
  *_isdigit - checks for digit btwn 0 and 9
  *@c: character to be checked
  *Return: 1 if true otherwise 0
  */
int _isdigit(int c);

/**
  *mul - multiplies two integers
  *@a: character to be multiplied by b
  *@b: character to be multiplied by a
  *Return: product
  */
int mul(int a, int b);

/**
  *print_numbers - prints numbers from 0 to 9 followed by a new line
  */
void print_numbers(void);

/**
  *print_most_numbers - print 0 to 9, skip 2 and 4
  */
void print_most_numbers(void);

/**
  *more_numbers - print 0 to 14 ten times
  */
void more_numbers(void);

/**
  *print_line - draws a straight line
  *@n: number of times _ is printed
  */
void print_line(int n);

#endif
