/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:53:33 by juitz             #+#    #+#             */
/*   Updated: 2023/09/08 17:21:04 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_toupper (int c)
{
    if (c >= 97 && c <= 122)
    c = (c - 32);
    return (c);
}


int main(void)
{
int c = 'k';

printf ("%c", ft_toupper(c));
}
