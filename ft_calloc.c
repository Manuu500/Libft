/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:44:51 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/10/18 14:13:16 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//num * size == cantidad total de memoria que te asigna
//void* (nombre de variable) asignación temporal

void	*ft_calloc(size_t num, size_t size)
{
	void	*mem;

	if (size == 0 || num == 0)
	{
		num = 1;
		size = 1;
	}
	mem = malloc(num * size);
	if (!mem)
		return (0);
	else
		ft_bzero(mem, (num * size));
	return (mem);
}
