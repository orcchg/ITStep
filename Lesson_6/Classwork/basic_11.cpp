#include <cstdio>

struct Point {
	float x, y, z;
	
	/* если мы не напишем эти функции
	 * то компилятор напишет их за нас
	 */
	 
	 Point();   // Point A;   (default ctor)
	 Point(std::initializer_list<float> list); // Point B = {a, b, c};
	 Point(const Point& obj);  // (copy ctor)  Point A; Point B = A;
	 ~Point();  // деструктор  (~dtor)
	 
	 Point& operator = (const Point& rhs);  // Point A, B;     A = B;
};
