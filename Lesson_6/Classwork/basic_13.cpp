#include <cstdio>

struct Point {
	float x, y;
};

int main(int argc, char** argv) {
	Point A;
	Point B = {2, 5};
	Point C = A;
	A = B;
	
	B.x = 8.9;
	B.y = 7.5;
	
	Point* ptr = &B;
	ptr->x = 3.14;
	ptr->y = 2.71;
	
	printf("ptrB = (%.2f, %.2f)\n", ptr->x, ptr->y);
	printf("B = (%.2f, %.2f)\n", B.x, B.y);
	
	return 0;
}
