/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albguzma <albguzma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:36:35 by albguzma          #+#    #+#             */
/*   Updated: 2023/09/13 09:47:46 by albguzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)str;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}	
	return (ptr);
}

// int main(void)
// {
// 	int 	c;
// 	int 	len;
// 	char	str[] = "hola";

// 	c = '$';
// 	len = 4;
// 	ft_memset(str, c, len);

// 	printf("%s", str);

// 	return (0);
// }