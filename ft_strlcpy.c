/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:19:59 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/09/16 18:19:37 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char ft_strlcpy(char *dest, const char *src, size_t size)
{
	int i;
	char temp;

	i = 0;
	while(dest[i] != '\0')
	{
		dest[i] = temp[i];
		dest[i] = src[i];
		src[i] = temp[i];
	}
	return (*dest);
}