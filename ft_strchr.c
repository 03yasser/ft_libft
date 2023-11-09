/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboutsli <yboutsli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:52:35 by yboutsli          #+#    #+#             */
/*   Updated: 2023/11/02 12:05:04 by yboutsli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strchr(const char *s, int c)
{
    char a;
	char *p;
	size_t i;

	if (!s)
		return (NULL);
	i = 0;
	a = (char)c;
	while (i <= ft_strlen(s))
	{
		if (s[i] == a)
			return (p = (s + i));
		i++;
	}
	return (NULL);
}