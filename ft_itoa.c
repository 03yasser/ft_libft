/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboutsli <yboutsli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:40:04 by yboutsli          #+#    #+#             */
/*   Updated: 2023/11/09 20:09:10 by yboutsli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_int(int n)
{
	int		count;
	long	nb;

	nb = n;
	count = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		count++;
		nb *= -1;
	}
	while (nb > 0)
	{
		count++;
		nb = nb / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		len;
	long	nb;

	nb = n;
	len = len_int(n);
	p = (char *) malloc ((sizeof (char) * (len + 1)));
	if (!p)
		return (NULL);
	if (nb < 0)
	{
		p[0] = '-';
		nb *= -1;
	}
	p[len] = '\0';
	len--;
	if (nb == 0)
		p[0] = 48;
	while (nb > 0)
	{
		p[len--] = nb % 10 + 48;
		nb = nb / 10;
	}
	return (p);
}
