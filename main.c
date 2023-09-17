/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertoguzman <albertoguzman@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:07:01 by albguzma          #+#    #+#             */
/*   Updated: 2023/09/17 11:40:55 by albertoguzm      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main() {
    char arr[] = "WhatKanyeDo";
    char c = 'K';
    char *res = memchr(arr, c, 1);

    if (res != NULL) {
        printf("Carácter encontrado: %c\n", *res);
        printf("Desde la posición encontrada: %s\n", res);
    } else {
        printf("Carácter no encontrado.\n");
    }

    return 0;
}
