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

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set) 
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
/*
	Devuelve: La string recortada, NULL si falla la reserva de memoria.
	
	Elimina todos los caracteres de la string ’set’
	desde el principio y desde el final de ’s1’, hasta
	encontrar un caracter no perteneciente a ’set’. La
	string resultante se devuelve con una reserva de
	malloc(3)
*/
