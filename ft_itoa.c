/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:01:57 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/10/18 14:17:42 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_num_length(int a)
{
	size_t	i;

	i = 0;
	if (a == 0)
		i = 1;
	if (a < 0)
	{
		a = a * -1;
		i++;
	}
	while (a != 0)
	{
		a = a / 10;
		i++;
	}
	return (i);
}

static char	*itoa_body(char *str, char sign, int n)
{
	size_t	cont;
	size_t	i;

	cont = get_num_length(n);
	str = malloc(sizeof(char) * (cont + 1));
	if (!str)
		return (0);
	str[cont] = '\0';
	i = cont - 1;
	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	while (n > 0)
	{
		str[i--] = n % 10 + '0';
		n = n / 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	char	sign;

	str = NULL;
	sign = 1;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = itoa_body(str, sign, n);
	return (str);
}
