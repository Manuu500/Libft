/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:03:30 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/10/18 14:16:23 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*a;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	k = 0;
	j = ft_strlen(s1);
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;
	a = malloc(sizeof(char) * (j - i + 1));
	if (!a)
		return (0);
	while (i < j)
		a[k++] = s1[i++];
	a[k] = '\0';
	return (a);
}
