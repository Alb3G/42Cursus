/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertoguzman <albguzma@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:02:34 by albguzma       #+#    #+#             */
/*   Updated: 2023/09/12 17:02:34 by albguzma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	char	src[] = "Hello";
	char	dst[10] = "";
	size_t	len;

	len = 3;
	memcpy(dst, src, len);
	printf("%s ", dst);

	ft_memcpy(dst, src, len);
	printf("%s", dst);
	
	return (0);
}