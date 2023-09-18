/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:14:08 by juitz             #+#    #+#             */
/*   Updated: 2023/09/18 13:17:18 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

char *ft_strdup(const char *s)
{
    char *new;
    int i;
    int len;

    len = 0;
    while (s[len] != '\0')
        len++;
    if (!(new = malloc(sizeof(char) * (len + 1))))
        return (NULL);
    
    i = 0;
    while (i < len)
    {
        new[i] = s[i];
    i++;
    }
    new[i] = '\0';
    return (new);
}
/*
int main(void)
{
    const char s [] = "Hello";

    printf("%s",ft_strdup(s));
}
*/