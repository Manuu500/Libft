/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:01:16 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/09/30 17:15:12 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

// int	main()
// {
// 	ft_putchar_fd('a', 1);
// }