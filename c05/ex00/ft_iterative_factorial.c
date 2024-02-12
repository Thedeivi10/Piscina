/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davigome <davigome@studen.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 19:00:16 by davigome          #+#    #+#             */
/*   Updated: 2024/02/12 19:04:53 by davigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	s;

	if (nb == 0 || nb == 1)
		return (1);
	s = nb - 1;
	while (s != 1)
	{
		nb = nb * s;
		s--;
	}
	return (nb);
}
