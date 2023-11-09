/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboutsli <yboutsli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:17:32 by yboutsli          #+#    #+#             */
/*   Updated: 2023/11/07 18:58:48 by yboutsli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	a;
	char	*p;
	size_t	i;

	i = ft_strlen(s) + 1;
	a = (char)c;
	while (i > 0)
	{
		if (s[i - 1] == a)
		{
			p = (char *)s + i - 1;
			return (p);
		}
		i--;
	}
	return (NULL);
}
