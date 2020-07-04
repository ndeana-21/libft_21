/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 01:16:49 by ndeana            #+#    #+#             */
/*   Updated: 2020/07/04 02:29:26 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

typedef struct	s_printf
{
	char			flag_minus;
	char			flag_plus;
	char			flag_zero;
	char			flag_space;
	char			flag_hash;
	unsigned int	width;
	unsigned int	accuracy;
	int				len;
	char			type;
}				t_printf;

t_printf	init_arg();
t_printf	init_arg_flag(const char *format, t_printf flags);
t_printf	init_arg_width(const char *format, t_printf flags);
t_printf	init_arg_len(const char *format, t_printf flags);
t_printf	init_arg_type(const char *format, t_printf flags);

int			ft_printing_args_char(va_list args, t_printf flags);
int			ft_printing_args_int(va_list args, t_printf flags);
int			ft_printing_args_float(va_list args, t_printf flags);
int			ft_printing_args_base(va_list args, t_printf flags);

#endif