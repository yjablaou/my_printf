#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
int    specifier(char  c,va_list arg);
int     ft_printf(const char *form, ...);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putstr(const char *s);
int	ft_putu(unsigned int n);
int	ft_isdigit(int c);
int hex(unsigned long n);
int uperhex(unsigned long n);

#endif
