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
template <typename T>
void insertionSort(T array[], size_t size) {
	for (size_t i = 1; i < size; ++i) {
		T key = array[i];
		int j = i - 1;
		while (j >= 0 && array[j] > key) {
			T temp = array[j];
			array[j] = key;
			array[j + 1] = temp;
			--j;
		}
	}
}

// ----------------------------------------------------------------------------
void print(char c) {
	printf("%c", c);
}

void print(int x) {
	printf("%i", x);
}

void print(float x) {
	printf("%.2f", x);
}

void print(Point point) {
	printf("(%.2f, %.2f)", point.x, point.y);
}

template <typename T>
void print(T array[], size_t size) {
	printf("[");
	const char* delimiter = "";
	for (size_t i = 0; i < size; ++i) {
		printf("%s", delimiter);
		print(array[i]);
		delimiter = " ";
	}
	printf("]\n");
}

// ----------------------------------------------------------------------------
int main(int argc, char** argv) {
	
	char chars[] = {'H', 'e', 'l', 'l', 'o'};
	size_t sizec = sizeof(chars) / sizeof(chars[0]);
	insertionSort<char>(chars, sizec);
	print<char>(chars, sizec);
	
	int integers[] = {5, 0, -3, 2, 7, -4, 2};
	size_t sizei = sizeof(integers) / sizeof(integers[0]);
	insertionSort<int>(integers, sizei);
	print<int>(integers, sizei);
	
	float floats[] = {3.17, 2.74, -0.05, 2.1, -1.1};
	size_t sizef = sizeof(floats) / sizeof(floats[0]);
	insertionSort<float>(floats, sizef);
	print<float>(floats, sizef);
	
	Point points[] = {{3.14, 2.71}, {0.05, -0.02}, {1.1, -0.2}, {0.4, -0.7}, {0.3, 2.2}};
	size_t sizep = sizeof(points) / sizeof(points[0]);
	insertionSort<Point>(points, sizep);
	print<Point>(points, sizep);
	
	return 0;
}
