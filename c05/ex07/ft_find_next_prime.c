/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davigome <davigome@studen.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:51:27 by davigome          #+#    #+#             */
/*   Updated: 2024/02/20 15:36:21 by thedeivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	while (1)
	{
		i = 2;
		while (nb % i != 0 && i < nb)
			i++;
		if (nb == i)
			break ;
		nb++;
	}
	return (i);
}
/*
int main(void)
{
	printf("%d", ft_find_next_prime(19));
	return 0;
}*/
