/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:41:25 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/09/12 20:41:25 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, unsigned int leng)
{
	unsigned int	i;
	char			*a;

	a = s;
	i = 0;
	while (a[i] != '\0')
	{
		if (i <= leng - 1)
			a[i] = '\0';
		write(1, &a[i], 1);
		i++;
	}
}
// int main ()
// {
//      char word[] = "me llamo antonio";
//       ft_bzero(word, 5);
//        }