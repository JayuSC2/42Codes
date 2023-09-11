/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:54:40 by juitz             #+#    #+#             */
/*   Updated: 2023/09/08 14:15:30 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    *ft_memmove(void *dest, const void *src, unsigned int n)
{
    char *s = (char *)src;
    char *d = (char *)dest;
    unsigned int i;

    i = 0;
    if (s > d)
    {
        i++;
    }
    while (i < n)
    {
        cdest[i] = csrc[i];
        i++;
    }
}
int main(void)
{
    unsigned int    n;
    char csrc[] = "What am I doing even?";
    char cdest[] = "Does this have to be bigger?";

    n = 28;
    ft_memmove (cdest, csrc, 28);
    printf ("%s", cdest);
    return (0);
}
