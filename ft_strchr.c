/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:49:11 by juitz             #+#    #+#             */
/*   Updated: 2023/09/11 13:26:30 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char *ft_strchr (const char *str, int c)
{
    while (*str != '\0')
    {
        if (*str == c)
        return (str);
        str++;
    }
    return (0);
}

int main(void)
{
    char *str
    char *first_w
    
    *str = "Des wird scho";
    first_w = *ft_strchr(str, w)

    printf ("first w: %s\n, first_w");
}