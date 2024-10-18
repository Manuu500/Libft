/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:30:26 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/10/18 14:15:48 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*build_letter(char *str, char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s2[j] != '\0' || s1[i] != '\0')
	{
		if (s1[i] != '\0')
		{
			str[i] = s1[i];
			i++;
		}
		else
		{
			str[i + j] = s2[j];
			j++;
		}
	}
	str[i + j] = '\0';
	return ((char *)str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	str1_long;
	size_t	str2_long;
	char	*str1;
	char	*str_cmp;

	str1_long = ft_strlen(s1);
	str2_long = ft_strlen(s2);
	str1 = malloc(sizeof(char) * (str1_long + str2_long) + 1);
	if (!str1)
		return (0);
	str_cmp = (char *)build_letter(str1, s1, s2);
	return (str_cmp);
}
