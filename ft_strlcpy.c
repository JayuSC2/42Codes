/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:17:20 by juitz             #+#    #+#             */
/*   Updated: 2023/09/21 12:18:37 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	n;

	n = 0;
	while (*src && n + 1 < size)
	{
		*dest++ = *src++;
		n++;
	}
	if (n < size)
		*dest = '\0';
	while (*src++)
		n++;
	return (n);
}
/*
int main(void)
{
	char src[] = "Hello how is it going";
	char dest[] = "How are you?";

	printf("%zu\n", ft_strlcpy(dest, src, 10));
}
*/
