/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albguzma <albguzma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:35:31 by albertoguzm       #+#    #+#             */
/*   Updated: 2023/09/16 15:45:30 by albguzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src_ptr;
	char	*dst_ptr;

	src_ptr = (char *)src;
	dst_ptr = (char *)dst;
	if (src < dst)
	{
		while (len--)
		{
			dst_ptr[len] = src_ptr[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
