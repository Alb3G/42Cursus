/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albguzma <albguzma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:36:35 by albguzma          #+#    #+#             */
/*   Updated: 2023/09/11 18:22:39 by albguzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *str, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*ptr;

	i = 0;
	ptr = str;
	while (i < len)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}

int main(void)
{
	int c;
	int len;
	void	*str;

	str = NULL;
	c = '$';
	len = 5;
	printf("%p", ft_memset(str, c, len));

	return (0);
}