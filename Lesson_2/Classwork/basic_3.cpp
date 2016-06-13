#include <cstdio>

void copy(int A[], int B[], int N) {
	for (int i = 0; i < N; ++i) {
		B[i] = A[i];
	}
}

void printArray(int A[], int N) {
	for (int i = 0; i < N; ++i) {
		printf("%i ", A[i]);
	}
	printf("\n");
}

int main(int argc, char** argv) {
	
	int A[] = {1, 5, -8, 3, 7};
	int B[5];
	
	printArray(A, 5);
	copy(A, B, 5);  // copies A to B
	printArray(B, 5);
	
	return 0;
}