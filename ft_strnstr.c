/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 20:55:38 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/09/20 21:59:35 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;
	int ok;
	
	ok = 0;
	j = 0;
	i = 0;
	
	if (!little)
		return (big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		if (little[j] == big[i])
		{
			while (little[j] != '\0')
			{
				if (little[j] == big[i])
					ok = 1;
				else
					ok = 0;
				j++;
			}
		}	
		i++;
	}
}

// char *ft_strnstr(const char *big, const char *little, size_t len)
// {
// 	size_t i;
// 	size_t j;

// 	i = 0;
// 	while (big[i] != '\0' && i < len)
// 	{
// 		if (big[i] == little[j])
// 		{
// 			if (little[j] == '\0')
// 			{
// 				return(&big[i]);
// 			}
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (0);
// }

int	main(void)
{
	char big[] = "holadiosholaholaholahola";
	char little[] = "adios";
	char* i = ft_strnstr(big, little, 15);
	printf("%s", i);
}