/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:15:11 by juitz             #+#    #+#             */
/*   Updated: 2023/09/18 14:31:58 by juitz            ###   ########.fr       */
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

    if (start >= ft_strlen(str) || len == 0)
    {
        return (NULL);
    }
    sub = (char *)malloc(len + 1);
    if (!sub)
        return (NULL);
    i = 0;
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
    unsigned int    start = 5;
    size_t  len = 5;

    printf ("%s", ft_substr(str, start, len));
}
*/
