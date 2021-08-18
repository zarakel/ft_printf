/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <jbuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 11:23:04 by jbuan             #+#    #+#             */
/*   Updated: 2021/08/05 12:28:29 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct s_list	t_list;

struct	s_list
{
	int		Count_Putchar;
};
void	ft_putchar(char c, t_list *s_list);
void	ft_putstr(char *s, t_list *s_list);
void	ft_putnbr_base(int nbr, char *base, t_list *s_list);
void	ft_putnbr_base16_mini(unsigned int nbr, t_list *s_list);
void	ft_putnbr_base16_maj(unsigned int nbr, t_list *s_list);
void	ft_putnbr_base16_mini_long(unsigned long long nbr, t_list *s_list);
void	ft_putnbr(int n, t_list *s_list);
void	ft_putunsignednbr(unsigned int n, t_list *s_list);
int	    ft_printf(const char *s, ...);
void	Converters(char c,va_list ap, t_list *s_list);
void	Converter_di(va_list ap, t_list *s_list);
void	Converter_u(va_list ap, t_list *s_list);
void	Converter_x(va_list ap, t_list *s_list);
void	Converter_Xx(va_list ap, t_list *s_list);
void	Converter_s(va_list ap, t_list *s_list);
void	Converter_c(va_list ap, t_list *s_list);
void	Converter_p(va_list ap, t_list *s_list);


#endif
