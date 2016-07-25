#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <ctime>

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

// size_t == unsigned int
void merge(
	int left[],
	int right[],
	size_t left_size,
	size_t right_size,
	int output[]) {
	
	size_t l = 0, r = 0, k = 0;
	while (l < left_size && r < right_size) {
		if (left[l] < right[r]) {
			output[k] = left[l];
			++l;
		} else {
			output[k] = right[r];
			++r;
		}
		++k;
	}
	
	if (l == left_size) {
		while (r < right_size) {
			output[k] = right[r];
			++r;
			++k;
		}
	}
	
	if (r == right_size) {
		while (l < left_size) {
			output[k] = left[l];
			++l;
			++k;
		}
	}
}

void mergeSort(int array[], size_t size) {
	if (size < 2) {
		return;
	}
	
	size_t left_size = size / 2;
	size_t right_size = size - left_size;
	
	int left[left_size];
	int right[right_size];
	
	for (size_t i = 0; i < left_size; ++i) {
		left[i] = array[i];
	}
	
	for (size_t i = 0; i < right_size; ++i) {
		right[i] = array[i + left_size];
	}
	
	mergeSort(left, left_size);
	mergeSort(right, right_size);
	merge(left, right, left_size, right_size, array);
}

int main(int argc, char** argv) {
	while (true) {
		srand(time(0));
		size_t size = rand() % 16 + 1;
		int A[size], B[size];
		generate(A, size);
		copyArray(A, B, size);
		
		mergeSort(A, size);
		std::sort(B, B + size);
		
		if (compare(A, B, size)) {
			printf("OK\n");
		} else {
			printf("Error! %i\n", size);
			print(A, size);
			print(B, size);
			break;
		}
	}
	return 0;
}
