/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 17:44:14 by ndeana            #+#    #+#             */
/*   Updated: 2020/07/04 02:35:34 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	static t_printf	flags;
	static size_t	counter;
	va_list			args;
	char			i;

	if (!format)
		return (-1);
	counter = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			flags = init_arg(format);
			counter += printing_arg(args);
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			counter++;
		}
		format++;
	}
	va_end(args);
	return (counter);
}


// malloc, free, write, va_start, va_arg, va_copy, va_end


//cspdiuxX% -0.*    # +    l ll h hh     nfge 