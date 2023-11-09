/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboutsli <yboutsli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:44:47 by yboutsli          #+#    #+#             */
/*   Updated: 2023/11/03 19:21:21 by yboutsli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int exist (char const c, char const *set)
{
	size_t j;

	j = 0;
	while (set[j])
	{
		if (c == set[j])
			return (1);
		j++;
	}
	return (0);
}

static size_t numbofchar(char const *s1, char const *set)
{
	size_t i;
	size_t count;

	i = 0;
	count = 0;
	while (s1[i])
	{
		if (!exist(s1[i], set))
			count++;
		i++;
	}
	return (count);
}
	
char *ft_strtrim(char const *s1, char const *set)
{
	char *p;
	size_t i;
	size_t len_s1;
	size_t j;

	len_s1 = ft_strlen(s1);
	i = 0;
	p = (char *) malloc (sizeof(char) * (numbofchar(s1, set) + 1));
	j = 0;
	if (!p)
		return (NULL);
	while (i < len_s1)
	{
		if (!exist(s1[i], set))
		{
			p[j] = s1[i];
			j++;
		}
		i++;
	}
	p[j] = '\0';
	return (p);
}
