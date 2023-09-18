/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:23:10 by juitz             #+#    #+#             */
/*   Updated: 2023/09/07 14:19:36 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	ptr = s;

	while (n-- > 0)
		*ptr++ = 0;
}
/*
int	main(void)
{
	char	arr[] = "Hello";
	
	printf ("%s\n", arr);
	ft_bzero(arr, 5);
	printf ("%s\n", arr);
	return (0);
}*/
