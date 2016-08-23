#include <cstdio>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int div(int a, int b) { return a / b; }
int mod(int a, int b) { return a % b; }

typedef int (*Func) (int, int);

void printArray(int a, int b, Func array[], size_t size) {
	for (size_t i = 0; i < size; ++i) {
		printf("%i ", array[i](a, b));
	}
	printf("\n");
}

int main(int argc, char** argv) {
	Func ptr[] = {add, sub, mul, div, mod};
	printArray(345, 7, ptr, sizeof(ptr) / sizeof(ptr[0]));
	return 0;
}
