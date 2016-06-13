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

void sort(int A[], int N) {
	for (int k = 1; k < N; ++k) {
		int current = A[k];
		int i = k - 1;
		while (i >= 0 && A[i] > current) {
			A[i + 1] = A[i];
			--i;
		}
		A[i + 1] = current;
	}
}

int main(int argc, char** argv) {
	
	int A[] = {1, 5, -8, 3, 7};
	
	printArray(A, 5);
	sort(A, 5);  // sorts A
	printArray(A, 5);
	
	return 0;
}