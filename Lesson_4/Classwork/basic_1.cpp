#include <iostream>

int sum(int x, int y) {
	int z = x + y;
	return z;
}

int mul(int x, int y) {
	int z = x * y;
	z += sum(x, y);
	return z;
}

int main(int argc, char** argv) {
	int a = mul(5, 7);
	return 0;
}
