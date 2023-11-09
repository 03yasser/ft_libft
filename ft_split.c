/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboutsli <yboutsli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:22:06 by yboutsli          #+#    #+#             */
/*   Updated: 2023/11/03 21:56:21 by yboutsli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t words_counts(char const *s, char c)
{
	size_t count;
	size_t i;
	int is_word;

	is_word = 0;
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			is_word = 0;
		else if (!is_word)
		{
			count++;
			is_word = 1;
		}
		i++;
	}
	return (count);
}


char **ft_split(char const *s, char c)
{
	size_t n_words;
	char **p;

	if (!s)
		return (NULL);
	n_words = words_counts(s, c);
	p = (char **) malloc (sizeof(char *) * (n_words + 1));
	if (!p)
		return (NULL);
}
int main (int argc, char **argv)
{
	(void) argc;
	printf("%zu\n",words_counts(argv[1],argv[2][0]));
}
