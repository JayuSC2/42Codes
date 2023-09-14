/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:20:15 by juitz             #+#    #+#             */
/*   Updated: 2023/09/12 14:54:48 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf ("%d\n", ft_isalnum('5'));
	printf ("%d\n", ft_isascii('-'));
	printf ("%d\n", ft_isascii('b'));
	printf ("%d\n", ft_isalpha('z'));
	printf ("%d\n", ft_isalpha('_'));
}

