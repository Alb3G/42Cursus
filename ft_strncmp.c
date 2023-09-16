/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albguzma <albguzma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:29:38 by albertoguzm       #+#    #+#             */
/*   Updated: 2023/09/16 17:06:53 by albguzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

// your strncmp does not work with basic input
// your strncmp does not work with basic input
// your strncmp does not work with zero length string
// your strncmp does not work with zero length string
// your strncmp does not cast in unsigned char the diff
// your strncmp does not work with basic input
// your strncmp does not work with non ascii chars