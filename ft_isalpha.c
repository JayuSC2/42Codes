/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:12:37 by juitz             #+#    #+#             */
/*   Updated: 2023/09/21 12:39:06 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isalpha(int input)
{
	if ((input >= 65 && input <= 90) || (input >= 97 && input <= 122))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf ("%d", ft_isalpha('2'));
	printf ("%d", ft_isalpha('/'));
	printf ("%d", ft_isalpha('z'));
}
*/
