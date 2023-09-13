/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertoguzman <albertoguzman@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:47:55 by albguzma          #+#    #+#             */
/*   Updated: 2023/09/13 19:29:38 by albertoguzm      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;
	size_t	dst_len_mod;


	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	dst_len_mod = ft_strlen(dst);
	i = 0;
	if (dstsize == 0)
		return (src_len + dst_len);
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[dst_len_mod] = src[i];
		dst_len_mod++;
		i++;
	}
	dst[dst_len_mod] = '\0';
	return (src_len + dst_len);
}
