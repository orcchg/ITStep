#include <cstdio>

bool isPrime(int x) {
	int divisor = 2;
	while (true) {
		int residual = x % divisor;
		
		if (residual != 0) {
			++divisor;
			continue;
		}
		
		if (divisor == x) {
			break;
		}
		
		return false;
	}
	return true;
}

int main(int argc, char** argv) {
	int x = 0;
	scanf("%i", &x);
	
	if (isPrime(x)) {
		printf("is prime\n");
	} else {
		printf("not prime\n");
	}
	
	return 0;
}