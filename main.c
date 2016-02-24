#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc < 4) {
		fprintf(stderr, "Missing arguments\n");
		exit(EXIT_FAILURE);
	}

	double a = atof(argv[1]);

	if (a == 0) {
		fprintf(stderr, "Factor 'a' can't be equal to 0\n");
		exit(EXIT_FAILURE);
	}

	double b = atof(argv[2]);
	double c = atof(argv[2]);
	double d = b * b - 4 * a * c;
	
	return EXIT_SUCCESS;
}