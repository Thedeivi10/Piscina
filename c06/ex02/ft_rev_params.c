#include <unistd.h>

int	main(int argc, char **argv)
{
	int	j;

	j = 0;
	argc -=1;
	while (argc > 0)
	{
		j = 0;
		while (argv[argc][j] != '\0')
		{
			write(1, &argv[argc][j], 1);
			j++;
		}
		write(1, "\n", 1);
		argc--;
	}
}
