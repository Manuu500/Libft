/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:13:22 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/09/24 20:17:14 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	count(const char *s);
void *ft_memcpy(void *dest, const void *src, unsigned int n);
size_t    ft_strlen(const char *str);
void	ft_bzero(void *s, unsigned int leng);


#endif