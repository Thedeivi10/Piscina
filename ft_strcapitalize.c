/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davigome <davigome@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:19:03 by davigome          #+#    #+#             */
/*   Updated: 2024/02/06 12:56:35 by davigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	no_space(int j, int i, char *str)
{
	if(str[j] == 32 || str[j] == 9)
		i = 0;
	return i;
}

int	no_character(int j, int i, char *str)
{
	if(str[j] > 'z' || (str[j] < 'a' && str[j] > 'Z') || str[j] < 'A')
		i = 0;
	return (i);
}

int	next_number(int j, int i, char *str)
{
	if(str[j] >= '0' && str[j] <= '9')
	{
		if(str[j + 1] >= 'a' && str[j + 1] <= 'z')
			i = 1;
	}
	return (i);
}

char	*alowcase(char *str)
{
	int	i;

	i = 0;
	while(str[i] != 0)
	{
		if( str[i] >= 'A' && str [i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return str;
}

char	*ft_strcapitalize(char *str)
{
	int	j;
	int	i;
	int	r;

	j = 0;
	i = 0;
	r = 0;
	alowcase(str);
	while (str[j] != '\0')
	{
		
		if (str[j] >= 'a' && str[j] <= 'z')
		{
			str[j] -= 32;
		}
		i = 1;
		r = j;
		while (str[j] != '\0' && i)
		{
			i = no_space(j, i, str);
			i = no_character(j, i, str);
			i = next_number(j, i, str);
			j++;
		}
		if (j == r)
			j++;
	}
	return (str);
}

int main()
{
	char	str[] ="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un. f. f f";
		
	printf("%s", ft_strcapitalize(str));
}

