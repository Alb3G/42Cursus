/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albguzma <albguzma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:30:06 by albertoguzm       #+#    #+#             */
/*   Updated: 2023/09/18 18:01:28 by albguzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*found;
	char	*p;

	c = (unsigned char)c;
	if (c == '\0')
		return (ft_strchr(str, '\0'));
	found = NULL;
	p = ft_strchr (str, c);
	while (p != NULL)
	{
		found = p;
		str = p + 1;
		p = ft_strchr (str, c);
	}
	return ((char *)found);
}
