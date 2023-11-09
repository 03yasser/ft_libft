/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboutsli <yboutsli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:44:47 by yboutsli          #+#    #+#             */
/*   Updated: 2023/11/09 20:01:41 by yboutsli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	exist(char const c, char const *set)
{
	size_t	j;

	j = 0;
	while (set[j])
	{
		if (c == set[j])
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		i;
	int		j;
	int		len;

	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	i = 0;
	j = ft_strlen(s1) - 1;
	while (exist(s1[i], set))
		i++;
	while (exist(s1[j], set))
		j--;
	len = j - i + 1;
	if (len <= 0)
		return (ft_strdup(""));
	p = malloc ((len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	j = -1;
	while (++j < len)
		p[j] = s1[j + i];
	p[j] = '\0';
	return (p);
}
