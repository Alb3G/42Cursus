/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertoguzman <albertoguzman@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:47:55 by albguzma          #+#    #+#             */
/*   Updated: 2023/09/13 18:48:05 by albertoguzm      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;
	size_t	dst_len2;

	i = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	dst_len2 = ft_strlen(dst);
	// if (dstsize == 0)
	// {
	// 	ft_strlcpy(dst, src, dstsize);
	// 	return (src_len + dst_len);
	// }
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[dst_len2] = src[i];
		dst_len2++;
		i++;
	}
	return (src_len + dst_len);
}
