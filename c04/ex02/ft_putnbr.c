#include <unistd.h>

int	max(int nb)
{
	if(nb <= 9)
		return (nb);
	else
		return (max(nb/10));
}

void	ft_putstring(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	vuelta(int nb)
{
	int vueltas;

	vueltas = 1;
	while (nb > 9 || nb < -9)
	{
		nb = nb / 10;
		vueltas = vueltas * 10;
	}
	return (vueltas);
}

void	ft_putnbr(int nb)
{
	char	min[] = "-2147483648";
	int	resto;
	char	n;

	if (nb == -2147483648)
		ft_putstring(min);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = nb * -1;
		}
		while (nb > 9)
		{
			n = max(nb) + '0';
			nb = nb - max(nb) * vuelta(nb);
			write(1, &n, 1);
		}
		resto = nb % 10;
		n = resto + '0';
		write(1, &n, 1);
	}
}

int main()
{
	ft_putnbr(2147483647);
	return 0;
}
