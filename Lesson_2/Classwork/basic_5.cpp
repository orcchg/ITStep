#include <cstdio>
#include <cstdlib>

void printArray(int* A, int N) {
	for (int i = 0; i < N; ++i) {
		printf("%i ", A[i]);
	}
	printf("\n");
}

void sort(int* A, int N) {
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
	int N = 0;
	scanf("%i", &N);
	
	int* ptr = new int[N];
	
	for (int i = 0; i < N; ++i) {
		ptr[i] = rand() % 100 + 1;
	}
	
	//printArray(ptr, N);
	sort(ptr, N);
	//printArray(ptr, N);
	
	delete [] ptr;
	
	return 0;
}
