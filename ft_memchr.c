/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboutsli <yboutsli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:24:03 by yboutsli          #+#    #+#             */
/*   Updated: 2023/11/01 17:43:08 by yboutsli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	char *p;
	size_t len_s;

	len_s = ft_strlen(s);
	p = (char *)s;
	c = (unsigned char)c;
	i = 0;
	
	while (i <= len_s)
	{
		if (p[i] == c)
			return (p + i);
		i++;
	}
	return (NULL);
}