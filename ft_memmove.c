/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:46:33 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/09/23 11:44:14 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	// size_t i;
	char* a_dest;
	char* b_src;

	// i = ft_strlen(dest);
	b_src = (char*)src;
	a_dest = (char*)dest;
	if(a_dest == b_src)
		return (dest);	
	if((a_dest > b_src) && (b_src + n) > a_dest)
	{
		while (n--)
			b_src = a_dest;
		return (dest);
	}
	return (ft_memcpy(dest, src, n));	
}

int	main(void)
{
	char dest[] = "hola";
	char src[] = "adios";
	ft_memmove(dest, src, 2);
}
