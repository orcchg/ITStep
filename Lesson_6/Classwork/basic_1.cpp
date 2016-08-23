#include <cstdio>

// size_t == unsigned long long
void printArray(int* array, size_t size) {
	for (size_t i = 0; i < size; ++i) {
		printf("%i ", array[i]);
	}
	printf("\n");
}

int main(int argc, char** argv) {
	int array[] = {5, 8, -1, 2, 4};
	size_t size = sizeof(array) / sizeof(array[0]);
	printArray(array, size);
	return 0;
}
