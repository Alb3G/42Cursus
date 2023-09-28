/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertoguzman <albertoguzman@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:32:27 by albertoguzm       #+#    #+#             */
/*   Updated: 2023/09/28 17:57:44 by albertoguzm      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if (c == ' ')
		return (1);
	return(0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;

	
}
/*
	Devuelve: La string recortada, NULL si falla la reserva de memoria.
	
	Elimina todos los caracteres de la string ’set’
	desde el principio y desde el final de ’s1’, hasta
	encontrar un caracter no perteneciente a ’set’. La
	string resultante se devuelve con una reserva de
	malloc(3)
*/
