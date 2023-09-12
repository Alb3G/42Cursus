/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertoguzman <albertoguzman@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:22:15 by albertoguzm       #+#    #+#             */
/*   Updated: 2023/09/12 11:48:15 by albertoguzm      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t  i;
    char    *ptr;

    i = 0;
    ptr = (char *)s;
    while (i < n)
    {
        ptr[i] = 0;
        i++;
    }
}

int main(void)
{
    size_t  n;
    char    str[] = "";

    n = 4;
    ft_bzero(str, n);

    printf("%s", str);

    return (0);
}