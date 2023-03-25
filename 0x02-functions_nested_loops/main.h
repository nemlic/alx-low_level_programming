#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c);

/**
  *print_alphabet - print lowercase alphabet
  */
void print_alphabet(void);

/**
  *print_alphabet_x10-print alphabet 1o times
  */
void print_alphabet_x10(void);

/**
  * _islower- checks for lowercase
 * @c: the character to check
 * Return: int
 */
int _islower(int c);

/**
  *_isaplha - checks aplhabetic order
  *@c: character to check
  *Return int
  */
int _isalpha(int c);
 
/**
  *print_sign - prints sign of a number
  *@n: number to check
 * Return: 1 if greater than 0, 0 if 0, -1 if less than 0
 */
int print_sign(int n);

/**
  *_abs - computes the absolute value of an integer.
  *@n: number to check
  *Return: absolute value
  */
int _abs(int);

/**
  *print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
*/
int print_last_digit(int);

/**
  *jack_bauer - prints every minute of the day starting 00:00 to 23:59
  */
void jack_bauer(void);

/**
  *times_table -print multiplication table
  */
void times_table(void);

/**
  *add - sums up two integers
  */
int add(int, int);

/**
  *print_to_98 - prints n to 98
  */
void print_to_98(int n);

#endif
