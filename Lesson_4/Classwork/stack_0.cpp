#include <cstdio>

void copy(int src[], int dest[], int size) {
	for (int i = 0; i < size; ++i) {
		dest[i] = src[i];
	}
}

int main(int argc, char** argv) {
	
	int array[] = {1, 2, 3, 4};
	int second[5];
	copy(array, second, 4);
	second[4] = 5;    // {1, 2, 3, 4, 5}
	
	int third[6];
	for (int i = 0; i < 2; ++i) {
		third[i] = second[i];
	}
	// {1, 2, ? ? ? ?}
	third[2] = 7;
	// {1, 2, 7, ? ? ?}
	for (int i = 3; i < 6; ++i) {
		third[i] = source[i - 1];
	}
	// {1, 2, 7, 3, 4, 5}
	
	return 0;
}
