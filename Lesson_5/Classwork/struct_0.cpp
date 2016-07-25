#include <cstdio>
#include <cmath>

struct Point {
	float x;    // fields (поля)
	float y;    // data members (переменные-члены)
};

float distance(Point A, Point B) {
	return sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
}

int main(int argc, char** argv) {
	
	Point A = {3.14, 2.71};
	
	Point B;
	B.x = 0.05;
	B.y = -0.4;
	
	float E = distance(A, B);
	printf("distance = %f\n", E);
	
	return 0;
}
