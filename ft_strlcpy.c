/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:19:59 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/09/19 12:29:56 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i;
	char* temp;

	i = 0;
	while(src[i] != '\0' && i < size)
	{
	 	dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (*dest);
}