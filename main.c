/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertoguzman <albertoguzman@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:25:25 by albguzma          #+#    #+#             */
/*   Updated: 2023/09/13 19:31:23 by albertoguzm      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	src[] = "hello";
	char	dst[10] = "     ";
	char	dst2[10] = "     ";

	printf("Res del strlcat: %li\n", strlcat(dst, src, 8));
	printf("%s\n", dst);

	printf("Res del ft_strlcat: %li\n", ft_strlcat(dst2, src, 8));
	printf("%s", dst2);

	return (0);
}