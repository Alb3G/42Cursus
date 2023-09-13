/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertoguzman <albertoguzman@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:25:25 by albguzma          #+#    #+#             */
/*   Updated: 2023/09/13 20:08:46 by albertoguzm      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	src[] = "hello";
	char	dst[10] = "als";
	char	dst2[10] = "als";

	printf("Res del strlcat: %li\n", strlcat(dst, src, 8));
	printf("%s\n", dst);

	printf("Res del ft_strlcat: %li\n", ft_strlcat(dst2, src, 8));
	printf("%s", dst2);

	return (0);
}