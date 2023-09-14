/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:36:02 by juitz             #+#    #+#             */
/*   Updated: 2023/09/14 17:20:42 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_strncmp(char *s1, char *s2, size_t n)
{
    unsigned int    i;

    i = 0;
    while (i < n && (s2[i] || s1[i] != '\0'))
    {
        if (s1[i] != s2[i])
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }
    return (0);
}

int main(void)
{
    char    s1[] = "It is what it isssss";
    char    s2[] = "It is what it issssssss";
    size_t n;

    n = 30;
    printf ("%d", ft_strncmp(s1,s2,n));
}