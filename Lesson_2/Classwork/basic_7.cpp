#include <cstdio>

int factorial(int N) {
	if (N == 1) {
		return 1;
	}
	
	int answer = 1;
	for (int i = 1; i <= N; ++i) {
		answer = answer * i;
	}
	
	return answer;
}

int main(int argc, char** argv) {
	int N = 0;
	scanf("%i", &N);
	
	int answer = factorial(N);
	printf("Factorial is: %i\n", answer);
	
	return 0;
}
