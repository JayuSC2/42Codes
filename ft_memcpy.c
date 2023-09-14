/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:21:15 by juitz             #+#    #+#             */
/*   Updated: 2023/09/14 17:21:04 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	*ft_memcpy (void *dest, const void *src, size_t n)
{
	char *csrc = (char *)src;
	char *cdest = (char *)dest;
	unsigned int i;

	i = 0;
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
}

int main(void)
{
    size_t    n;
    char csrc[] = "Peace out";
    char cdest[] = "I'm done for the day";

    n = 20;
    ft_memcpy (cdest, csrc, 20);
    printf ("%s", cdest);

    return (0);
}
