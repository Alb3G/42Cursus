/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albguzma <albguzma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:17:49 by albguzma          #+#    #+#             */
/*   Updated: 2023/09/23 18:41:41 by albguzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substring;

	i = 0;
	substring = (char *)malloc(ft_strlen(s) + 1 * sizeof(char));
	if (substring == 0)
		return (NULL);
	while (i < len)
	{
		substring[i] = s[start];
		i++;
		start++;
	}
	return (substring);
}
