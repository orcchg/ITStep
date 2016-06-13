#include <cstdio>

int fibonacci(int N) {
	if (N == 0 || N == 1) {
		return 1;
	}
	
	int A[N + 1];
	A[0] = 1;
	A[1] = 1;
	
	for (int i = 2; i <= N; ++i) {
		A[i] = A[i - 2] + A[i - 1];
	}
	
	return A[N];
}

int main(int argv, char** argv) {
	int N = 0;
	scanf("%i", &N);
	
	int answer = fibonacci(N);
	printf("Fibonacci: %i\n", answer);
	
	return 0;
}