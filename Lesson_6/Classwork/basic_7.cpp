#include <cstdio>

int calculate(int A, int B, int* diff) {
	*diff = A - B;
	return A + B;
}

int main(int argc, char** argv) {
	int x = 5;
	int y = 7;
	int diff = 0;
	
	int sum = calculate(x, y, &diff);
	printf("sum = %i, diff = %i\n", sum, diff);
	return 0;
}