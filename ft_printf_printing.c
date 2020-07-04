/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_printing.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 22:44:33 by ndeana            #+#    #+#             */
/*   Updated: 2020/07/03 22:55:58 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printing_args_char(va_list args, t_printf flags)
{
	int		counter;

	counter = 0;
	if (flags.type = 'c')
	{
		ft_putchar_fd(va_arg(args, char), 1);
	}
	else if (flags.type = 's')
	{
		ft_putstr_fd(va_arg(args, char*), 1);
	}
	else if (flags.type = '%')
	{
		ft_putchar_fd('%', 1);
	}
	return (counter);
}

int			ft_printing_args_int(va_list args, t_printf flags)
{
	int		counter;

	counter = 0;
	if (flags.type = 'i')
	{
		ft_putnbr_fd(ft_itoa(va_arg(args, long long)), 1);
	}
	else if (flags.type = 'd')
	{
		ft_putnbr_fd(ft_itoa(va_arg(args, long long)), 1);
	}
	else if (flags.type = 'u')
	{
		ft_putnbr_fd(ft_itoa(va_arg(args, unsigned long long)), 1);
	}
	return (counter);
}

int			ft_printing_args_float(va_list args, t_printf flags)
{
	int		counter;
	if (flags.type = 'f')
	{

	}
	else if (flags.type = 'e')
	{
		
	}
	else if (flags.type = 'g')
	{
		
	}
	counter = 0;
	return (counter);
}

int			ft_printing_args_base(va_list args, t_printf flags)
{
	int		counter;

	counter = 0;
	if (flags.type = 'x')
	{
		ft_putstr_fd(
			ft_dex_to_numsys(
				va_arg(args, unsigned long long),
				16,
				sizeof(unsigned long long)),
			1);
	}
	else if (flags.type = 'X')
	{
		ft_putstr_fd(
			ft_toupperstr(
				ft_dex_to_numsys(
					va_arg(args, unsigned long long),
					16,
					sizeof(unsigned long long))),
			1);
	}
	else if (flags.type = 'p')
	{
		ft_putstr_fd("0x", 1);
		ft_putstr_fd(
			ft_dex_to_numsys(
				va_arg(args, unsigned long long),
				16,
				sizeof(unsigned long long)),
			1);
	}
	return (counter);
}
