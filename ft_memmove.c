/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:46:33 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/09/16 13:19:28 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;
	char *a;
	unsigned char* b;

	b = src;
	a = dest;
	i = 0;
	while(a[i] && b[j])
	{
		if(dest[i] >= src[j] + n)
		i++;
		j++;
	}
}

int	main(void)
{
	char dest[] = "hola";
	char src[] = "adios";
	ft_memmove(dest, src, 2);
}
