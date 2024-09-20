/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:38:21 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/09/18 20:31:47 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char* a;
	unsigned char* b;

	a = (unsigned char*)s1;
	b = (unsigned char*)s2;
	i = 0;
	if(n == 0)
		return (0);
	while(a[i] && b[i] && i <= n)
	{
		if(a[i] < b[i])
			return (-1);
		if(a[i] > b[i])
			return (1);
	}
	return (0);
}

int	main()
{
	char s[] = "dmo estas";
	char c[] = "cmo estas";
	int d = ft_memcmp(s, c, 4);
	printf("%d", d);
}