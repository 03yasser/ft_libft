/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboutsli <yboutsli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:03:42 by yboutsli          #+#    #+#             */
/*   Updated: 2023/11/03 17:59:04 by yboutsli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
	size_t j;
	char *p;

	p = malloc (sizeof(char) * (len + 1));
	if (!p || !s)
		return (NULL);
	j = 0;
	while (j < len && s[start + j])
	{
		p[j] = s[start + j];
		j++;
	}
	p[j] = '\0';
	return (p);
}