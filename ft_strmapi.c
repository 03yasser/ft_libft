/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboutsli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 22:18:52 by yboutsli          #+#    #+#             */
/*   Updated: 2023/11/04 23:04:44 by yboutsli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	size_t	len_s;
	size_t	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	len_s = ft_strlen(s);
	p = (char *) malloc (len_s * (sizeof(char) + 1));
	if (!p)
		return (NULL);
	while (i < len_s)
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
