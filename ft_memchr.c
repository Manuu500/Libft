/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:19:35 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/09/18 18:43:17 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char* d;

	d = (unsigned char *)s;
	i = 0;
	while (d[i] != '\0' && i < n)
	{
		if (d[i] == (char)c)
		{
			return((char *)&d[i]);
		}
		i++;
	}
	return (0);
}


// void *ft_memchr(const void *s, int c, size_t n)
// {
// 	size_t i;
// 	unsigned char* d;

// 	d = (unsigned char *)s;
// 	i = 0;
// 	while (i < n)
// 	{
// 		if(d[i] == (unsigned char)c)
// 		{
// 			return (d + i);	
// 		}	
// 		i++;
// 	}
// 	return (0);
// }