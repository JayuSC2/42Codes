/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:54:40 by juitz             #+#    #+#             */
/*   Updated: 2023/09/17 20:28:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    *ft_memmove(void *dest, const void *src, size_t len)
{
    char *csrc = (char *)src;
    char *cdest = (char *)dest;
    size_t i;

    i = 0;
    if (cdest > csrc)
    {
        while (len-- > 0)
            cdest[len] = csrc[len];
    }
    while (i < len)
    {
        cdest[i] = csrc[i];
        i++;
    }
    return(dest);
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
