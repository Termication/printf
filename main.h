#ifndef MAIN_H
#define MAIN_H
/**
 * struct convert - struc that function as converter for printf
 * @conv: pointer of type for specifier
 * @function: func conversion specifier
 *
 */

typedef struct convert
{
	char *conv;
	int (*function)();
} converter;

int _printf(const char *format, ...);
int _putchar(char c);

#endif
