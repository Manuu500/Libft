/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:22:32 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/10/16 20:42:20 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;

	/* list = *lst; */
	while (*lst != NULL)
	{
		list = (*lst)->next;
		ft_lstdelone(*lst, (*del));
		*lst = list;
	}
	*lst = NULL;
}