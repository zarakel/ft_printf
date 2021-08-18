#include "ft_printf.h"

void   Converter_Xx(va_list ap, t_list *s_list)
{
    unsigned int    u;

    u = 0;
    u = va_arg(ap, unsigned int);
    ft_putnbr_base16_maj(u, s_list);
}