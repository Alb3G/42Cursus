/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albguzma <albguzma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:54:34 by albguzma          #+#    #+#             */
/*   Updated: 2023/09/18 20:02:13 by albguzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n--)
	{
		if (*str1 != *str2)
			return (str1 - str2);
		if (n || *str1 || *str2)
		{
			str1++;
			str2++;
		}
	}
	return (0);
}

// your memcmp does not work with basic input
// your memcmp does not cast the memory in unsigned char
// your memcmp stop at \0
// your memcmp does not work with basic input