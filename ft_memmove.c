/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:54:40 by juitz             #+#    #+#             */
/*   Updated: 2023/09/19 15:33:21 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include <stddef.h>

void    *ft_memmove(void *dest, const void *src, size_t len)
{
    char *csrc = (char *)src;
    char *cdest = (char *)dest;

    if (cdest == NULL && csrc == NULL)
        return (NULL);
    if (cdest > csrc && cdest < csrc + len)
    {
        while (len >= 1)
        {
            cdest[len - 1] = csrc[len - 1];
            len--;
        }
    }
    else
    {
      ft_memcpy(dest, src, len);
    }
    return(dest);
}
/*
int main(void)
{
    size_t    len = 30;
    char csrc[] = "Aight";
    char cdest[] = "We got this";

    ft_memmove (cdest, csrc, len);
    printf ("%s", cdest);
    return (0);
}
*/