#include <algorithm>
#include <cstdio>

void insertionSort(int array[], unsigned int size) {
	for (unsigned int i = 1; i < size; ++i) {
		int key = array[i];
		int j = i - 1;
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

int main(int argc, char** argv) {
	int array[] = {5, -2, -4, 0, 3, 7, 9, 1};
	int size = sizeof(array) / sizeof(array[0]);
	print(array, size);
	//insertionSort(array, size);
	std::sort(array, array + size);
	print(array, size);
	
	return 0;
}
