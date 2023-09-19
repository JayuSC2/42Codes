/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:15:11 by juitz             #+#    #+#             */
/*   Updated: 2023/09/19 18:43:05 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

char    *ft_substr(char const *str, unsigned int start, size_t len)
{
    char *sub;
    size_t i;

    i = 0;
    if (start >= ft_strlen(str) || len == 0)
    {
        return (0);
    }
    sub = (char *)malloc(len + 1);
    if (!sub)
        return (0);
    while (i < len && str[start + i] != '\0')
    {
        sub[i] = str[start + i];
        i++;
    }
    sub[i] = '\0';
    return(sub);
}
/*
int main(void)
{
    char const str [] = "Lets flash this";
    unsigned int    start = 11;
    size_t  len = 5;

    printf ("%s", ft_substr(str, start, len));
}
*/
