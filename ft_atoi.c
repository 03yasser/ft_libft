/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboutsli <yboutsli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:29:41 by yboutsli          #+#    #+#             */
/*   Updated: 2023/11/10 18:52:09 by yboutsli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	res(long n, long x, char c, int sign)
{
	n = (x * 10) + (c - 48);
	if (n < x && sign == 1)
		return (-1);
	else if (n < x && sign == -1)
		return (0);
	return (n);
}

int	ft_atoi(const char *str)
{
	int		sign;
	int		i;
	long	n;
	long	x;

	i = 0;
	sign = 1;
	n = 0;
	x = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		n = res(x, n, str[i], sign);
		i++;
	}
	return (n * sign);
}
