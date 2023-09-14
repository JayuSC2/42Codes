/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:48:45 by juitz             #+#    #+#             */
/*   Updated: 2023/09/13 12:43:45 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stddef.h>

char *strnstr(const char *big, const char *little, size_t len)
{
    const char *big_start = big;
    const char *little_start = little;
    
    while (*big != '\0' && len > 0)
    {
        while (*big != '\0' && *little != '\0' && *big == *little)
        big++;
        little++;
        len--;
    }
    if (*little == '\0')
    {
        return (char *)big_start;
    }
    
        big = big_start + 1;
        little = little_start;
        len--;
    return (0);
}

int main(void)
{
    const char *big = "I'm gonna do this";
    const char *little = "do this";
    size_t  len = 16;

    printf ("%s\n", strnstr(big, little, len));
    return (0);
}

 
 

 