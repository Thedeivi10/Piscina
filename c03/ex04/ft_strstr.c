#include <unistd.h>
#include <stdio.h>

int	size(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	reserva;
	int	j;
	char	*ub;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		reserva = i;
		ub = &str[i];
		while (str[i] == to_find[j] && j < size(to_find))
		{
			i++;
			j++;
		}
		if (j == size(to_find))
			return (ub);
		else
			j = 0;
		if (reserva == i)
			i++;
	}
	return NULL;
}

int	main(void)
{
	char str[] = "Hola como estas";
	char f[] = "como";
	char *ubi = ft_strstr(str,f);
	int lau = *ubi + '0';

	printf("%d", lau);
	return 0;
}
