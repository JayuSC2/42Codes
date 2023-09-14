/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:49:11 by juitz             #+#    #+#             */
/*   Updated: 2023/09/11 16:42:43 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char *ft_strchr (const char *str, int c)
{
    while (*str != '\0')
    {
        if (*str == c)
        return ((char*)str);
        str++;
    }
    return (0);
}

int main(void)
{
    const char *str = "Des wird scho";
    char *first_w = ft_strchr(str, 'w');

    printf ("%s\n", first_w);
    printf ("%d", first_w);
}