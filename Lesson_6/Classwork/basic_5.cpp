#include <cstdio>

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main(int argc, char** argv) {
	int x = 5;
	int y = 7;
	swap(x, y);
	printf("x = %i, y = %i\n", x, y);
	return 0;
}
