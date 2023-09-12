/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albguzma <albguzma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:26:41 by albguzma          #+#    #+#             */
/*   Updated: 2023/09/11 18:15:28 by albguzma         ###   ########.fr       */
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
void *ft_memset(void *str, int c, size_t len);

#endif