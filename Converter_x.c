#include "ft_printf.h"

void   Converter_x(va_list ap, t_list *s_list)
{
    unsigned int u;

    u = 0;
    u = va_arg(ap, unsigned int);
    ft_putnbr_base16_mini(u, s_list);
}