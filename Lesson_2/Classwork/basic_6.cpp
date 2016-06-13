#include <cstdio>

int main(int argc, char** argV) {
	
	double pi = 3.1415;
	int x = pi;    // 3
	
	int y = 5.1456;
	double exp = y;  // 5.00000000
	
	int y = (int) 5.1456;
	int y = static_cast<int>(5.1456);
	
	return 0;
}