/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:19:35 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/09/23 20:31:53 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;

	d = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (d[i] == (unsigned char)c)
		{
			return ((char *)&d[i]);
		}
		i++;
	}
	return (0);
}
// int main() {
//     const char str[] = "Antoñitaasfdsfdsfs";
//     char ch = 's';
//     size_t n = 13; // Longitud de la cadena

//     char *result = ft_memchr(str, ch, n);    
//     printf("%s", result);

//     return 0;
// }

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