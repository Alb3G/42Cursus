/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertoguzman <albertoguzman@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:30:06 by albertoguzm       #+#    #+#             */
/*   Updated: 2023/09/16 14:18:57 by albertoguzm      ###   ########.fr       */
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
	p = strchr (str, c);
	while (p != NULL)
	{
		found = p;
		str = p + 1;
		p = strchr (str, c);
	}
	return ((char *)found);
}