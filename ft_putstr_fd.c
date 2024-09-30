/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:08:57 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/09/30 17:19:10 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	str_long;

	str_long = ft_strlen(s);
	write(fd, s, str_long);
}

// int	main()
// {
// 	ft_putstr_fd("Hola que tal", 1);
// }