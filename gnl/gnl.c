char *ft_getline(fd, line)
{
	int	c;
	while(line[c] != \n)
	ft_strdup()
	return(line);
}
char *ft_read(fd, line, all)
{
	int	r;
	r = read(fd, line, BUFFER_SIZE);
	if(r < 0)
		return(NULL);
	if(r == 0)
	{
		free(line);
		return (all);
	}
	else

	return(all);
}
char *get_next_line(int fd)
{
	char *line;
	char *all;

	if(BUFFER_SIZE <= 0 || fd < 0 || fd > 1000)
		return(NULL);
	line = malloc(sizeof(char) * BUFFER_SIZE + 1);
	
	all = ft_read(fd, line, BUFFER_SIZE);
	line = ;
	return(all);
}