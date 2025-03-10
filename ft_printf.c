/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 18:42:06 by mruiz-ur          #+#    #+#             */
/*   Updated: 2025/03/10 13:13:59 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	handle_p(unsigned long long p)
{
	size_t	counter;

	counter = 0;
	if (p == 0)
		return (ft_putstr_fd("(nil)", 1));
	else
	{
		ft_putstr_fd("0x", 1);
		counter += 2;
		counter += ft_print_hex(p, 0);
	}
	return (counter);
}

static int	check_parameters(va_list args, char const *str, size_t i)
{
	if (str[i] == 's')
		return (ft_putstr_fd(va_arg(args, char *), 1));
	if (str[i] == 'c')
		return (ft_putchar_fd(va_arg(args, int), 1));
	if (str[i] == '%')
		return (ft_putchar_fd('%', 1));
	if (str[i] == 'i' || str[i] == 'd')
		return (ft_putnbr_fd(va_arg(args, int), 1));
	if (str[i] == 'u')
		return (ft_putnbrsign(va_arg(args, unsigned int)));
	if (str[i] == 'x')
		return (ft_print_hex(va_arg(args, unsigned int), 0));
	if (str[i] == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), 1));
	if (str[i] == 'p')
		return (handle_p(va_arg(args, unsigned long long)));
	return (0);
}

int	ft_printf_body(va_list args, size_t i, size_t counter, char const *str)
{
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			i++;
			counter += check_parameters(args, str, i);
		}
		else
			counter += ft_putchar_fd(str[i], 1);
		i++;
	}
	return (counter);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	size_t	i;
	size_t	counter;

	va_start(args, str);
	counter = 0;
	i = 0;
	counter = ft_printf_body(args, i, counter, str);
	va_end(args);
	return (counter);
}