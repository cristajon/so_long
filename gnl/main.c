#include "get_next_line.h"
#include <fcntl.h>

int main(int argc, char **argv)
{
	if (argc != 2)
		return 1;

	int fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return 2;
	
	char *str = get_next_line(fd);
	printf("gnl: %s\n", str);
	free(str);
	str = get_next_line(fd);
	printf("gnl2: %s\n", str);
	free(str);
	return 0;	
}



