/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboutsli <yboutsli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:04:08 by yboutsli          #+#    #+#             */
/*   Updated: 2023/11/10 16:36:19 by yboutsli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	p = NULL;
	if (!lst || !new)
		return ;
	if (! *lst)
		*lst = new;
	else
	{
		p = ft_lstlast(*lst);
		p -> next = new;
	}
}
