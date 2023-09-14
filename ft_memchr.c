/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:49:21 by juitz             #+#    #+#             */
/*   Updated: 2023/09/13 14:45:07 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    char *str = (char *)s;

    while (*str != '\0' && n > 0)
    {
        if (*str == c)
            return ((void*)str);
        str++;
        n--;
    }
    return (NULL);
}

int main(void)
{
    const char *str = "Des wird scho";
    size_t n  = 13;
    
    void *found = ft_memchr(str, 'b', n);

    if (found != NULL)
        printf("%s\n", (char *)found);
    else
        printf("Character not found.\n");
    return (0);
}