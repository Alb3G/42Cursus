/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albguzma <albguzma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:38:48 by albertoguzm       #+#    #+#             */
/*   Updated: 2023/09/16 16:58:42 by albguzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != (char) c)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return ((char *) str);
}
