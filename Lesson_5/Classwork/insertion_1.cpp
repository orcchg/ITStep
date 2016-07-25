#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <ctime>

void insertionSort(int array[], unsigned int size) {
	for (unsigned int i = 1; i < size; ++i) {
		int key = array[i];
		unsigned int j = i - 1;
		while (j >= 0 && array[j] > key) {
			int temp = array[j];
			array[j] = key;
			array[j + 1] = temp;
			--j;
		}
	}
}

// [1 2 3 4 5]
void print(int array[], unsigned int size) {
	const char* delimiter = "";
	printf("[");
	for (unsigned int i = 0; i < size; ++i) {
		printf("%s", delimiter);
		printf("%i", array[i]);
		delimiter = " ";
	}
	printf("]\n");
}

void generate(int array[], unsigned int size) {
	for (unsigned int i = 0; i < size; ++i) {
		array[i] = rand();
	}
}

void copyArray(int array[], int copy[], unsigned int size) {
	for (unsigned int i = 0; i < size; ++i) {
		copy[i] = array[i];
	}
}

bool compare(int A[], int B[], unsigned int size) {
	for (unsigned int i = 0; i < size; ++i) {
		if (A[i] != B[i]) {
			return false;
		}
	}
	return true;
}

int main(int argc, char** argv) {
	while (true) {
		srand(time(0));
		
		int array[1000];
		int copy[1000];
		
		generate(array, 1000);
		copyArray(array, copy, 1000);
		
		insertionSort(array, 1000);
		std::sort(copy, copy + 1000);
		
		if (compare(array, copy, 1000)) {
			printf("OK\n");
		} else {
			printf("Error !\n");
			break;
		}
	}
	
	return 0;
}
