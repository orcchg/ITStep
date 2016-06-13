#include <cstdio>

bool isPrime(int x) {
	for (int divisor = 2; divisor < x; ++divisor) {
		int residual = x % divisor;
		if (residual == 0) {
			return false;
		}
	}
	return true;
}

int main(int argc, char** argv) {
	int x = 0;
	
	printf("Enter x: ");
	scanf("%i", &x);
	
	bool result = isPrime(x);
	
	if (result) {
		printf("is prime\n");
	} else {
		printf("not prime !\n");
	}
	
	return 0;
}
