/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertoguzman <albertoguzman@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:35:31 by albertoguzm       #+#    #+#             */
/*   Updated: 2023/09/13 09:27:22 by albertoguzm      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*src_cpy;
	char	*dst_ptr;
	char	*src_ptr;

	src_cpy = (char *)malloc(len);
	if (src_cpy == NULL)
		return (NULL);
	src_ptr = (char *)src;
	dst_ptr = (char *)dst;
	i = 0;
	while (i < len)
	{
		src_cpy[i] = src_ptr[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		dst_ptr[i] = src_cpy[i];
		i++;
	}
	return (dst_ptr);
}