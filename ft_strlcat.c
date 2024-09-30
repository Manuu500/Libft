/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:10:09 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/09/24 21:15:13 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strlen.c"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	if (dest[i] != '\0')
		return (size);
	while (src[j] != '\0' && (i + j < size - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + ft_strlen(src));
}
 int    main(void)
 {
     char dest[15] = "holaaaa";
     char src[] = "adios";
     int i = ft_strlcat(dest, src, sizeof(dest));
     printf("%d", i);    
 }