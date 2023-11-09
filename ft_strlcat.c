/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboutsli <yboutsli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:13:54 by yboutsli          #+#    #+#             */
/*   Updated: 2023/11/01 15:03:31 by yboutsli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;
    size_t dst_len;

    i = 0;
	dst_len = 0;
    while (dst[dst_len] && dst_len < dstsize)
		dst_len++;
    i = dst_len;
    if (dst_len == dstsize || dst_len > dstsize)
        return (dst_len + ft_strlen(src));
    while (src[j] && j < dstsize - dst_len - 1)
        dst[i++] = src[j++];
    dst[i] = '\0';
    return (dst_len + ft_strlen(src));
}