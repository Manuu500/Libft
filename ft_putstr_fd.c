/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:08:57 by mruiz-ur          #+#    #+#             */
/*   Updated: 2025/03/10 13:37:50 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	str_long;

	if (s == NULL)
		return (ft_putstr_fd("(null)", 1));
	else
	{
		str_long = ft_strlen(s);
		write(fd, s, str_long);
	}
	return (str_long);
}
