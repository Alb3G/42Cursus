/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertoguzman <albertoguzman@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:38:48 by albertoguzm       #+#    #+#             */
/*   Updated: 2023/09/16 11:24:14 by albertoguzm      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr (const char *str, int c)
{
	if (ft_isalpha(c))
	{
		while (*str)
		{
			if (*str == (char)c)
			{
				return ((char*)str);
			}
			str++;
		}
	}
	return (NULL);
}