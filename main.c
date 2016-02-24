#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc < 4) {
		fprintf(stderr, "Missing arguments\n");
		exit(EXIT_FAILTURE);
	}

	return EXIT_SUCCESS;
}