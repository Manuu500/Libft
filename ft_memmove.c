/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:46:33 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/09/19 17:59:57 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	char* a_dest;
	char* b_src;

	i = ft_strlen(dest);
	b_src = (char*)src;
	a_dest = (char*)dest;
	if(a_dest == b_src)
		return (dest);	
	if(a_dest > b_src)
		ft_memcpy(dest, src, n);
	else
	{
		while(a_dest[i] && b_src[i])
		{
			b_src[i] = a_dest[i];
			i--;
		}
	}
	return (dest);	
}


void *ft_memcpy(void *dest, const void *src, unsigned int n)
{
    size_t i;
    unsigned const char* a;
    unsigned char* b;

    b = dest;
    a = src;
    i = 0;
    while(b[i] != '\0' && i < n)
    {
        b[i] = a[i];
        write(1, &b[i], 1);
        i++;
    }
    b[i] = '\0';

}

int	main(void)
{
	char dest[] = "hola";
	char src[] = "adios";
	ft_memmove(dest, src, 2);
}
