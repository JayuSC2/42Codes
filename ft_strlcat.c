/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:33:10 by juitz             #+#    #+#             */
/*   Updated: 2023/09/14 19:30:14 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"
#include <stddef.h>

size_t    ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t    i;
    size_t    j;

    j = 0;
    if (dstsize <= ft_strlen(dst))
        return (dstsize + ft_strlen(src));
    i = ft_strlen(dst);
    while (src[j] != '\0' && i < dstsize - 1)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (i + ft_strlen(src));
}

int main(void)
{
    const char src[] = "How is it";
    char dst[30] = "going my man";
    size_t  dstsize = 30;

    printf("%ld", ft_strlcat(dst, src, dstsize));
}