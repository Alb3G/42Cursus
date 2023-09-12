/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertoguzman <albertoguzman@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:26:41 by albguzma          #+#    #+#             */
/*   Updated: 2023/09/12 11:39:02 by albertoguzm      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <ctype.h>

int	ft_isalpha(int nbr);
int	ft_isdigit(int nbr);
int	ft_isalnum(int nbr);
int	ft_isascii(int nbr);
int	ft_strlen(char *str);
void	*ft_memset(void *str, int c, size_t len);
void    ft_bzero(void *s, size_t n);

#endif