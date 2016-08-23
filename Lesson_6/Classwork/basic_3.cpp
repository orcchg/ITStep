#include <cstdio>
#include <cmath>   // M_PI = 3.1415926

double circle(double radius, double* ptr) {
	double perim = 2 * M_PI * radius;
	*ptr = perim;
	
	double square = radius * radius * M_PI;
	return square;
}

int main(int argc, char** argv) {
	double radius = 5.0;
	double length = 0;
	double square = circle(radius, &length);
	printf("square = %lf, length = %lf\n", square, length);
	return 0;
}
