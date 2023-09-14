/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:46:40 by juitz             #+#    #+#             */
/*   Updated: 2023/09/13 15:55:37 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    const char *s1 = (char *)str1;
    const char *s2 = (char *)str2;

    while ((*s1 || *s2 != '\0') && (n > 0))
    {
        if (*s1 != *s2)
        {
            return (*s1 - *s2);
        }
        s1++;
        s2++;
        n--;
    }
    return(0);
}
int main(void)
{
    const char *s1 = "Hello";
    const char *s2 = "Heolo";
    size_t n = 3;

    printf ("%d", ft_memcmp(s1, s2, n));
}