#include "ft_printf.h"

void    Converter_di(va_list ap, t_list *s_list)
{
    int i;

    i = 0;
    i = va_arg(ap, int);
    ft_putnbr(i, s_list);
}