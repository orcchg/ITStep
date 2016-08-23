#include <cstdio>

int sqr(int a) {
	return a*a;  // RVO - return value optimization
}

int main(int argc, char** argv) {
	
	int a = 5;
	int b = sqr(a);
	
	return 0;
}
