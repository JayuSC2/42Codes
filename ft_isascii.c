/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:00:51 by juitz             #+#    #+#             */
/*   Updated: 2023/09/18 13:19:07 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isascii	(int input)
{
	if (input >= 0 && input <= 127)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf ("%d", ft_isascii('2'));
}
*/