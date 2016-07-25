#include <cstdio>
#include <cmath>

struct Point {
	float x;    // fields (поля)
	float y;    // data members (переменные-члены)
};

float distance(Point A, Point B) {
	return sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
}

// ----------------------------------------------------------------------------
void insertionSort(Point array[], size_t size) {
	Point ZERO = {0.0, 0.0};
	for (size_t i = 1; i < size; ++i) {
		Point key = array[i];
		int j = i - 1;
		while (j >= 0 && distance(array[j], ZERO) > distance(key, ZERO)) {
			Point temp = array[j];
			array[j] = key;
			array[j + 1] = temp;
			--j;
		}
	}
}

// ----------------------------------------------------------------------------
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

// ----------------------------------------------------------------------------
int main(int argc, char** argv) {
	
	Point points[] = {{3.14, 2.71}, {0.05, -0.02}, {1.1, -0.2}, {0.4, -0.7}, {0.3, 2.2}};
	size_t size = sizeof(points) / sizeof(points[0]);
	print(points, size);
	insertionSort(points, size);
	print(points, size);
	
	return 0;
}
