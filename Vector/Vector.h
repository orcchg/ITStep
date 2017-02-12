#ifndef VECTOR__H__
#define VECTOR__H__

#include <utility>  // for std::swap()
#include <cstdlib>

class Vector {
  /**
   * distance() - external function, calculates Euclidean distance between two vectors.
   * It should have an access to private fields, such as 'm_data', but since it is external,
   * it does not. Thus, it has been declared 'friend' for class Vector.
   */
  friend double distance(const Vector& a, const Vector& b);

public:
  Vector(double* input, size_t size);  // Ctor: performs deep copy from 'input' to 'm_data'
  ~Vector();  // ~Dtor: releases memory occupied by Vector class' instance (releases 'm_data')
  Vector(const Vector& obj);  // Copy-Ctor: deep copy from 'obj.m_data' to 'm_data'

  /**
   * Vector a, b;
   * b = a;  <==>  b.operator(a);
   */
  Vector& operator = (Vector rhs)  // copy-&-swap: deep copy from 'rhs.m_data' to 'm_data'
  {
    std::swap(m_size, rhs.m_size);
    std::swap(m_data, rhs.m_data);
    return *this;
  }
  
  /**
   *
   * Copy-&-Swap inside - copy is exposed
   *
  Vector& operator = (const Vector& rhs)
  {
    Vector temp(rhs);  // copy-ctor
    std::swap(m_size, temp.m_size);
    std::swap(m_data, temp.m_data);
    return *this;
  }
  */

  Vector operator + (const Vector& rhs) const;  // Vector c = a + b; <==> a.operator+(b);
  Vector operator - (const Vector& rhs) const;  // also 'const' as operator+ - doesn't modify 'this' instance
  double operator * (const Vector& rhs) const;  // calculates scalar product - double value

  inline double operator [] (int index) const { return m_data[index]; }  // cout << a[5]
  inline double operator [] (int index) { return m_data[index]; }  // a[5] = 7

  inline size_t size() const { return m_size; }  // inline - recomendation for compiler not to make stack frame for function call

  double length() const;

private:
  size_t m_size;  // number of coordinates of vector
  double* m_data;  // array of vector coordinates of m_size
};

double distance(const Vector& a, const Vector& b);

#endif  // VECTOR__H__

