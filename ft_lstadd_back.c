/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboutsli <yboutsli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:04:08 by yboutsli          #+#    #+#             */
/*   Updated: 2023/11/08 21:27:07 by yboutsli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *p;

	p = ft_lstlast(*lst);
	if (!p)
        *lst = new;
	p -> next = new;
}
int main()
{
	t_list  *begin;
    begin = NULL;

    t_list *elem ;
    elem -> content = "hello";
	elem ->  next = NULL;
    ft_lstadd_back(&begin, elem);
    //ft_lstadd_back(&begin, elem2);
    //ft_lstadd_back(&begin, elem3);

}