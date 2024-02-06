int	ft_strcmp(char *s1, char *s2)
{
	int	c1;
	int	c2;

	c1 = 0;
	c2 = 0;

	while(s1[c1] != '\0')

		c1++;
	while(s2[c2] != '\0')
		c2++;

	if(c1 == c2)
		return (0);
	if(c1 > c2)
		return (1);
	if(c1 < c2)
		return (-1);
}
