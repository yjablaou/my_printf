#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
void    specifier(char  c,va_list arg);
int     ft_printf(const char *form, ...);
int     ft_atoi(const char *str);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(const char *s);
void	ft_putu(unsigned int n);

#endif
