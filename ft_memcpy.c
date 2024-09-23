/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:56:13 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/09/12 20:56:13 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	b = (unsigned char *)dest;
	a = (unsigned char *)src;
	i = 0;
	if (n == 0)
		return (dest);
	while (i < n)
	{
		b[i] = a[i];
		i++;
	}
	return (dest);
}

// int main()
// {
//     const char w1[] = "alksdjflkslkfjkdslñf";
//     char w2[] = "adios";
//     char* i = ft_memcpy(w1, w2, 6);
//     printf("%s/n", i);
// }