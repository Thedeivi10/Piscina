#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	aux_pos;
	int	aux_character;
	i = 1;
	j = 0;

	while (i < argc)
	{
		if (argv[i][j] > argv[argc - 1][j])
		{
			aux_character = argv[i][j];
			argv[i][j] = argv[argc - 1]

