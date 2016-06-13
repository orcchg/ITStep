#include <cstdio>

int factorial(int N) {
	if (N == 1) {
		return 1;
	}
	
	// N! = (N - 1)! * N
	int answer = factorial(N - 1) * N;
	return answer;
}

int main(int argc, char** argv) {
	
	int N = 0;
	scanf("%i", &N);
	
	int answer = factorial(N);
	printf("Factorial is: %i\n", answer);
}