#include "ft_printf.h"

void   Converter_u(va_list ap, t_list *s_list)
{
    unsigned int    u;

    u = 0;
    u = va_arg(ap, unsigned int);
    ft_putunsignednbr(u, s_list);
}