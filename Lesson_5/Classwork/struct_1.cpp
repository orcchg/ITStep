#include <cstdio>
#include <cmath>

struct Point {
	float x;    // fields (поля)
	float y;    // data members (переменные-члены)
};

float distance(Point A, Point B) {
	return sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
}

void print(Point point) {
	printf("(%.2f, %.2f)", point.x, point.y);
}

// [(x, y) (x, y) ... (x, y)]
void print(Point points[], size_t size) {
	printf("[");
	const char* delimiter = "";
	for (size_t i = 0; i < size; ++i) {
		printf("%s", delimiter);
		print(points[i]);
		delimiter = " ";
	}
	printf("]\n");
}

int main(int argc, char** argv) {
	
	Point points[] = {{3.14, 2.71}, {0.05, -0.02}, {1.1, -0.2}, {0.4, -0.7}, {0.3, 2.2}};
	print(points, sizeof(points) / sizeof(points[0]));
	
	return 0;
}
