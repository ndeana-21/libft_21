/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 02:23:32 by ndeana            #+#    #+#             */
/*   Updated: 2020/07/04 03:30:55 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_printf	init_arg(const char *format)
{
	t_printf	flags;
	
	flags.flag_minus = 0;
	flags.flag_plus = 0;
	flags.flag_zero = 0;
	flags.flag_space = 0;
	flags.flag_hash = 0;
	flags.width = 0;
	flags.accuracy = 0;
	flags.len = 0;
	flags.type = 0;
	flags = init_arg_flag(format, flags);
	return (flags);
}

t_printf	init_arg_flag(const char *format, t_printf flags)
{
	char	*tmp;

	tmp = "-0 +#";
	while (*format)
		if (*format == '-')
			flags.flag_minus = 1;
		else if (*format == '+')
			flags.flag_plus = 1;
		else if (*format == ' ')
			flags.flag_space = 1;
		else if (*format == '0')
			flags.flag_zero = 1;
		else if (*format == '#')
			flags.flag_hash == 1;
		else
			break;
	flags = init_arg_width(format, flags);
	return (flags);
}

t_printf	init_arg_width(const char *format, t_printf flags)
{
	flags.width = ft_atoi(format);
	if (flags.width < 0)
		flags.width = 0;
	if (++format == '.')
		flags = init_arg_accuracy(++format, flags); // надо посчитать сколько символов прочитал atoi
	return (flags);
}

t_printf	init_arg_accuracy(const char *format, t_printf flags)
{
	flags.accuracy = ft_atoi(format);
	if (flags.accuracy < 0)
		flags.accuracy = 0;
	flags = init_arg_len(++format, flags); // надо посчитать сколько символов прочитал atoi
	return (flags);
}

t_printf	init_arg_len(const char *format, t_printf flags)// переделать под sizeof()
{
	if (*format == 'l')
		if (*++format == 'l')
		{
			flags.len == "ll";
			flags = init_arg_type(++format, flags);
		}
		else
		{
			flags.len == "l";
			flags = init_arg_type(format, flags);
		}
	else if (*format == 'h')
		if (*++format == 'h')
		{
			flags.len = "hh";
			flags = init_arg_type(++format, flags);
		}
		else
		{
			flags.len = "h";
			flags = init_arg_type(format, flags);
		}
	return (flags);
}

t_printf	init_arg_type(const char *format, t_printf flags)
{
	char	*types;
	size_t	i;

	types = "cspdiuxX%nfge";
	i = 0;
	while (types[i])
	{
		if (types[i] == *format)
		{
			flags.type = types[i];
			return ;
		}
		i++;
	}
	return (flags);
}

