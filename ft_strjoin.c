/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertoguzman <albertoguzman@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 09:16:13 by albertoguzm       #+#    #+#             */
/*   Updated: 2023/09/28 17:31:58 by albertoguzm      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		total_len;

	total_len = ft_strlen(s1) + ft_strlen(s2) + 1; 
	if (!s1 && !s2)
		return (NULL);
	new_str = (char *)malloc(total_len);
	if (new_str == NULL)
		return (NULL);
	ft_strlcpy(new_str, s1, total_len);
	ft_strlcat(new_str, s2, total_len);
	return (new_str);
}
