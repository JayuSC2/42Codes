/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:57:28 by juitz             #+#    #+#             */
/*   Updated: 2023/09/14 17:20:21 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#ifndef LIBFT_H
#define LIBFT_H

void	ft_bzero(void *s, size_t n);
int	ft_isalnum(int input);
int	ft_isascii(int input);
int	ft_isalpha(int input);
int	ft_isdigit(int input);
int	ft_isprint(int input);
int	ft_tolower (int c);
int	ft_toupper (int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int x, size_t len);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlen(const char *str);
int	ft_strncmp(char *s1, char *s2, size_t n);

#endif

