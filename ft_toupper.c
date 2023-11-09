/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboutsli <yboutsli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:12:07 by yboutsli          #+#    #+#             */
/*   Updated: 2023/11/07 18:45:03 by yboutsli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c == EOF)
		return (-1);
	c = (unsigned char)c;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
