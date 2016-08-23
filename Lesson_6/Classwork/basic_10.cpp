#include <cstdio>
#include <initializer_list>

struct Point {
	float x, y, z;
	
	Point();  // пользовательский конструктор по-умолчанию
	Point(std::initializer_list<float> list);
	Point(const Point& obj);
	Point(float a, float b);
	Point(float a, float b, float c);
	~Point();
	
	Point& operator = (const Point& rhs);
};

Point::Point()
  : x(0.0), y(0.0), z(0.0) {
	printf("Default ctor\n");
}

Point::Point(std::initializer_list<float> list) {
	printf("Initializer list ctor\n");
}

Point::Point(const Point& obj)
  : x(obj.x), y(obj.y), z(obj.z) {
	printf("Copy ctor\n");
}

Point::Point(float a, float b)
  : x(a), y(b), z(0.0) {
	printf("Two-args ctor\n");
}

Point::Point(float a, float b, float c)
  : x(a), y(b), z(c) {
	printf("User ctor\n");
}

Point::~Point() {
	printf("Destructor\n");
}

Point& Point::operator = (const Point& rhs) {
	x = rhs.x;
	y = rhs.y;
	z = rhs.z;
	printf("Assignment operator\n");
	return *this;
}

int main(int argc, char** argv) {
	Point A;
	Point B = {3.14, 2.71, 0.5};
	Point C(2.7, -4.1, 0.3);
	Point D(2.7, 8.0);
	
	Point E = B;  // copy ctor
	A = B;        // operator =
	
	return 0;
}