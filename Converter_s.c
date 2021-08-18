#include "ft_printf.h"

void   Converter_s(va_list ap, t_list *s_list)
{
    char *s;

    s = va_arg(ap, char *);
    if (s == NULL)
	    s = "(null)";
    ft_putstr(s, s_list);
}