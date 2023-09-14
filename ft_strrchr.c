/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:16:42 by juitz             #+#    #+#             */
/*   Updated: 2023/09/14 20:03:28 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == (char) c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}

int	main(void)
{
	 const char s[] = "Servus wie gehts";
    int c = 'l';

    char *result = ft_strrchr(s, c);
    if (result != NULL)
    {
        printf("%s", result);
    }
    else
    {
        printf("Character not found");
    }
	return 0;
}






