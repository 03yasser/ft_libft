/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboutsli <yboutsli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:05:04 by yboutsli          #+#    #+#             */
/*   Updated: 2023/11/13 19:07:24 by yboutsli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;

	if ((int) count < 0 && (int) size <  0)
        return (NULL);
	if ((size && count > (4294967295 / size)))
		return (NULL);
	p = malloc (count * size);
	if (!p)
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}
