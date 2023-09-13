/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertoguzman <albertoguzman@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:35:31 by albertoguzm       #+#    #+#             */
/*   Updated: 2023/09/13 10:40:26 by albertoguzm      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src_ptr;
	char	*dst_ptr;
	
	src_ptr = (char *)src;
	dst_ptr = (char *)dst;
	if (src_ptr < dst_ptr)
	{
		while (len--)
		{
			dst_ptr[len] = src_ptr[len];
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}