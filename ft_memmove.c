/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:46:33 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/10/02 15:34:28 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*a_dest;
	char	*b_src;

	b_src = (char *)src;
	a_dest = (char *)dest;
	if (a_dest == b_src)
		return (dest);
	if ((a_dest > b_src) && (b_src + n) > a_dest)
	{
		while (n--)
			a_dest[n] = b_src[n];
		return (dest);
	}
	return (ft_memcpy(dest, src, n));
}
// int	main(void)
// {
// 	char dest[] = "hola";
// 	char src[] = "adios";
// 	ft_memmove(dest, src, 2);
// }
