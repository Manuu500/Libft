/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 20:55:38 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/10/08 19:31:54 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j < len))
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (0);
}

// char	*ft_strnstr(const char *big, const char *little, size_t len)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	if (*little == '\0')
// 		return ((char *)big);
// 	while ((big[i]) && (i < len))
// 	{
// 		j = 0;
// 		while ((big[i + j] == little[j]) && (i + j < len))
// 			j++;
// 		if (little[j] == '\0')
// 			return ((char *)&big[i]);
// 		i++;
// 	}
// 	return (NULL);
// }
// int    main(void)
// {
//     char big[] = "holadholaiosadios";
//     char little[] = "adios";
//     char* i = ft_strnstr(big, little, 15);
//     printf("%s/n", i);
// }
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