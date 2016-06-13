#include <cstdio>

int fibonacci(int N) {
	if (N == 0 || N == 1) {
		return 1;
	}
	
	int answer = fibonacci(N - 2) + fibonacci(N - 1);
	return answer;
}

int main(int argc, char** argv) {
	int N = 0;
	scanf("%i", &N);
	
	int answer = fibonacci(N);
	printf("Fibonacci: %i\n", answer);
	
	return 0;
}
