#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
	double c = atof(argv[3]);
	double d = b * b - 4 * a * c;

	if (d < 0) {
		printf("No real roots\n");
	} else {
		double x1 = (-b + sqrt(d)) / (2 * a);
		double x2 = (-b - sqrt(d)) / (2 * a);

		printf("x1 = %lf x2 = %lf\n", x1, x2);
	}

	return EXIT_SUCCESS;
}