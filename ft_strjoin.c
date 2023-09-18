/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:56:15 by juitz             #+#    #+#             */
/*   Updated: 2023/09/18 17:02:14 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char *new;
    size_t  len;

    if (!s1 || !s2)
        return(NULL);
    len = ft_strlen(s1) + ft_strlen(s2);

    new = (char *)malloc(sizeof(char) * (len + 1));
    if (!new)
        return (NULL);
    

