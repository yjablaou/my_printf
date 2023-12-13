#include "ft_printf.h"

int ft_printf(const char *form, ...)
{
	int i;
	int k;
	va_list args;

	k = 0;
	i = 0;
	va_start(args,form);

	while (form[i] != '\0')
	{
		if(form[i] == '%')
		{
			if(form[++i] == '%')
				ft_putchar(form[i++]);
			else
				specifier(form[i],args);
		}
		else
			ft_putchar(form[i]);
		i++;
	}
	va_end(args);
	return(0);
}
int main()
{
	unsigned int a =1000; 
	ft_printf("youssef %s\n","jablaoui");
}