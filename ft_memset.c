/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:11:05 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/09/12 15:11:05 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int value, unsigned int num)
{
	size_t	i;
	char	*a;

	a = str;
	i = 0;
	while (a[i] != '\0' && i < num)
	{
		a[i] = value;
		i++;
	}
	return (a);
}

//  int main()
//  {
//      char text[] = "hola como esta";
//      char* i = ft_memset(text, 'a', 9);
//      printf("%s/n", i);
// }