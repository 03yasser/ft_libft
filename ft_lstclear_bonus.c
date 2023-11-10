/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboutsli <yboutsli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:27:21 by yboutsli          #+#    #+#             */
/*   Updated: 2023/11/10 15:50:40 by yboutsli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;
	t_list *next;

	if (!lst || !del)
		return ;
	p = *lst;
	while (p)
	{
		next = p -> next;
		ft_lstdelone(p, del);
		p = next;
	}
	*lst = NULL;
}
