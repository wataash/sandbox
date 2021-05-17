#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char const *argv[])
{
	char *leaked = malloc(1);
	return 0;
}
