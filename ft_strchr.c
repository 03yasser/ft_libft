/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboutsli <yboutsli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:52:35 by yboutsli          #+#    #+#             */
/*   Updated: 2023/11/07 19:03:19 by yboutsli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strchr(const char *s, int c)
{
    char a;
	char *p;
	size_t i;

	i = 0;
	a = (char)c;
	while (i <= ft_strlen(s))
	{
		if (s[i] == a)
		{
			p = (char*)(s + i);
			return (p);
		}
		i++;
	}
	return (NULL);
}