#include <unistd.h>

void ft_putnbr(int nb);

int	cont(char *str)
{
	int	cont;
	int	i;

	i = 0;
	cont = 0;
	while (str[i] != '\0')
	{
		if(str[i] == '-')
			cont++;
		i++;
	}
	return (cont);
}

int	ft_atoi(char *str)
{
	int support;
	int atoi;
	int i;

	i = 0;
	support = 10;
	atoi = -1;
	while (str[i] != '\0')
	{
		if (str[i] <= '9' && str[i] >= '0' && atoi != -1)
		{
			atoi = atoi * support;
			atoi = atoi + str[i];
		}
		if (str[i] <= '9' && str[i] >= '0' && atoi == -1)
			atoi = str[i];
		i++;
	}
	if (cont(str) % 2 != 0)
		atoi = atoi * -1;
	return (atoi);
}

int main()
{
	char str[] = "    ---+--+1234ab567";
	int a = ft_atoi(str);
	ft_putnbr(a);
	return 0;
}
