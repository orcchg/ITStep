#include <cstdio>

int main(int argc, char** argv) {
	
	int x = 5;
	double pi = 3.14;
	
	// ------------------------------
	int* p = &x;
	double* q = &pi;
	
	printf("x = %i\n", x);
	printf("p = %p\n", p);
	printf("q = %p\n", q);
	
	int a = *p;
	printf("a = %i\n", a);
	
	double b = *q;
	printf("b = %lf\n", b);
	
	return 0;
}
