/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:01:26 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/23 12:02:57 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

void	ft_lstclear( t_list **lst, void (*del)(void *) )
{
	t_list	*list;
	t_list	*tmp;

	list = *lst;
	if (!list)
		return ;
	while (list->next != NULL)
	{
		tmp = list->next;
		ft_lstdelone(list, del);
		list = tmp;
	}
	ft_lstdelone(list, del);
	*lst = NULL;
}
