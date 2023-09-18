/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:48:44 by juitz             #+#    #+#             */
/*   Updated: 2023/09/18 13:19:23 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isalnum	(int input)
{
	if ((input >= 48 && input <= 57) || (input >= 65 && input <= 90) || (input >= 97 && input <= 122))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf ("%d", ft_isalnum(';'));
	printf ("%d", ft_isalnum('-'));
	printf ("%d", ft_isalnum('0'));
	printf ("%d", ft_isalnum('A'));
}
*/