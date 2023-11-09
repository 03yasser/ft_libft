/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboutsli <yboutsli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:04:08 by yboutsli          #+#    #+#             */
/*   Updated: 2023/11/09 21:41:39 by yboutsli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *p;

	p = NULL;
	if (!lst || !new)
		return ;
    if (!*lst)
		*lst = new;
	else
	{
		p = ft_lstlast(*lst);
		p -> next = new;
	}
}
int main()
{
	size_t *n1;
	size_t *n2;
	n1 = ft_lstnew(ft_strdup("first node"));
	n2 = ft_lstnew(ft_strdup("seconde node"));
	
}