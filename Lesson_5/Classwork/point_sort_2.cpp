#include <cstdio>
#include <cmath>

struct Point {
	float x;    // fields (поля)
	float y;    // data members (переменные-члены)
};

float distance(Point A, Point B) {
	return sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
}

bool operator > (Point A, Point B) {
	Point ZERO = {0.0, 0.0};
	return distance(A, ZERO) > distance(B, ZERO);
}

// ----------------------------------------------------------------------------
void insertionSort(int array[], size_t size) {
	for (size_t i = 1; i < size; ++i) {
		int key = array[i];
		int j = i - 1;
		while (j >= 0 && array[j] > key) {
			int temp = array[j];
			array[j] = key;
			array[j + 1] = temp;
			--j;
		}
	}
}

void insertionSort(float array[], size_t size) {
	for (size_t i = 1; i < size; ++i) {
		float key = array[i];
		int j = i - 1;
		while (j >= 0 && array[j] > key) {
			float temp = array[j];
			array[j] = key;
			array[j + 1] = temp;
			--j;
		}
	}
}

void insertionSort(Point array[], size_t size) {
	for (size_t i = 1; i < size; ++i) {
		Point key = array[i];
		int j = i - 1;
		while (j >= 0 && array[j] > key) {
			Point temp = array[j];
			array[j] = key;
			array[j + 1] = temp;
			--j;
		}
	}
}

// ----------------------------------------------------------------------------
void print(int x) {
	printf("%i", x);
}

void print(float x) {
	printf("%.2f", x);
}

void print(Point point) {
	printf("(%.2f, %.2f)", point.x, point.y);
}

void print(int integers[], size_t size) {
	printf("[");
	const char* delimiter = "";
	for (size_t i = 0; i < size; ++i) {
		printf("%s", delimiter);
		print(integers[i]);
		delimiter = " ";
	}
	printf("]\n");
}

void print(float floats[], size_t size) {
	printf("[");
	const char* delimiter = "";
	for (size_t i = 0; i < size; ++i) {
		printf("%s", delimiter);
		print(floats[i]);
		delimiter = " ";
	}
	printf("]\n");
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
	
	int integers[] = {5, 0, -3, 2, 7, -4, 2};
	size_t sizei = sizeof(integers) / sizeof(integers[0]);
	insertionSort(integers, sizei);
	print(integers, sizei);
	
	float floats[] = {3.17, 2.74, -0.05, 2.1, -1.1};
	size_t sizef = sizeof(floats) / sizeof(floats[0]);
	insertionSort(floats, sizef);
	print(floats, sizef);
	
	Point points[] = {{3.14, 2.71}, {0.05, -0.02}, {1.1, -0.2}, {0.4, -0.7}, {0.3, 2.2}};
	size_t sizep = sizeof(points) / sizeof(points[0]);
	insertionSort(points, sizep);
	print(points, sizep);
	
	return 0;
}
