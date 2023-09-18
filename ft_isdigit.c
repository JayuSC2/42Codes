/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:01:22 by juitz             #+#    #+#             */
/*   Updated: 2023/09/18 13:20:30 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isdigit	(int input)
{
	if (input >= 48 && input <= 57)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf ("%d", ft_isdigit('3'));
	printf ("%d", ft_isdigit('z'));
}
*/