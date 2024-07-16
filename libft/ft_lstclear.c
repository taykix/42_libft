/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayki <tayki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 09:11:45 by tayki             #+#    #+#             */
/*   Updated: 2024/07/16 09:16:53 by tayki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	nxt;

	if (!lst)
		return ;
	if (!*lst)
		return ;
	while (*lst)
	{
		nxt = *lst->next;
		ft_lstdelone(*lst, del);
		*lst = nxt;
	}
}
