/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboutsli <yboutsli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:17:32 by yboutsli          #+#    #+#             */
/*   Updated: 2023/11/02 12:08:26 by yboutsli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char a;
	char *p;
	size_t i;

	if (!s)
		return (NULL);
	i = ft_strlen(s) + 1;
	a = (char)c;
	while (i > 0)
	{
		if (s[i - 1] == a)
			return (p = (s + i - 1));
		i--;
	}
	return (NULL);
}