/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:17:08 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/10/08 13:23:39 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	str_long;

	str_long = ft_strlen(s);
	write(fd, s, str_long);
	write(fd, "\n", 1);
}

// int	main()
// {
// 	ft_putendl_fd("Hola que tal estamos", 1);
// }