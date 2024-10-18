/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:11:05 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/10/15 19:34:49 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int value, unsigned int num)
{
	size_t			i;
	unsigned char	*a;

	a = str;
	i = 0;
	while (i < num)
	{
		a[i] = (unsigned char)value;
		i++;
	}
	return (a);
}
