#include <cmath>  // for std::sqrt()
#include "Vector.h"

/**
 * Ctor: constructs a new instance of class "Vector"
 * and performs deep copy from 'input' to 'm_data'
 * field of this new instance.
 */
Vector::Vector(double* input, size_t size)
  : m_size(size)  // assigns 'm_size' of new instance
  /**
   * Allocates new block of memory of size 'size',
   * containing double values. Pointer to this block
   * is assigned to field 'm_data' of this new instance.
   */
  , m_data(new double[size])
{
  // deep copy from 'input' to allocated block,
  // bound with 'm_data' field
  for (size_t i = 0; i < size; ++i) {
    m_data[i] = input[i];
  }
}

/**
 * ~Dtor: destroys this instance and releases memory
 * previously oocupied with data (in terms of 'm_data' field)
 * of this instance of class "Vector".
 */
Vector::~Vector() {
  delete [] m_data;  m_data = NULL;
}

/**
 * Copy-Ctor: constructs a new instance of class "Vector"
 * and performs deep copy from 'obj.m_data' to 'm_data'
 * field of this new instance.
 */
Vector::Vector(const Vector& obj)
  : m_size(obj.m_size)  // see comments above in Ctor
  , m_data(new double[m_size]) {
  for (size_t i = 0; i < m_size; ++i) {
    m_data[i] = obj.m_data[i];
  }
}

// ------------------------------------------------
/**
 * Constructs a fresh new instance of class "Vector" as
 * a sum of corresponding coordinates of this instance
 * and instance referenced by 'rhs'.
 *
 * Coordiantes are picked from 'm_data' fields of arguments.
 *
 * Note about arguments: operator+ is called in the
 * following manner:
 *
 *       Vector a, b, c;
 *       c = a + b;
 *
 * it is equivalent to the following expression:
 *
 *       c = a.operator+(b);
 *
 * 'this' points to 'a', rhs is a reference to 'b',
 */
Vector Vector::operator + (const Vector& rhs) const {
  // allocates memory for sum of coordinates
  double* data = new double[m_size];
  // calculates each coordinate as sum of two others
  for (size_t i = 0; i < m_size; ++i) {
    data[i] = m_data[i] + rhs.m_data[i];
  }
  Vector result = Vector(data, m_size);  // new instance
  delete [] data;  data = NULL;  // release allocated memory
  return result;
}

Vector Vector::operator - (const Vector& rhs) const {
  double* data = new double[m_size];
  for (size_t i = 0; i < m_size; ++i) {
    data[i] = m_data[i] - rhs.m_data[i];
  }
  Vector result = Vector(data, m_size);
  delete [] data;  data = NULL;
  return result;
}

double Vector::operator * (const Vector& rhs) const {
  // a1*b1 + a2*b2 + ... + aN*bN
  double scalar = 0;
  for (size_t i = 0; i < m_size; ++i) {
    scalar += m_data[i] * rhs.m_data[i];
  }
  return scalar;
}

double Vector::length() const {
  double result = 0;
  for (size_t i = 0; i < m_size; ++i) {
    result += m_data[i] * m_data[i];
  }
  return std::sqrt(result);
}

// ----------------------------------------------------
double distance(const Vector& a, const Vector& b) {
  double result = 0;
  /**
   * This function has access to private field 'm_data'
   * due to "friend" qualifier.
   *
   * On the other hand, we could use operator[] instead of
   * direct access to the private field 'm_data', eliminating
   * "friend" qualifier (presence of 'Vector::size()' method
   * call allows us to remove "friend" qualifier as soon as
   * we replace direct access to 'm_data' with operator[]).
   *
   * This is preferable, but we keep both approaches to clarify.
   */
  for (size_t i = 0; i < a.size(); ++i) {
    result += (a.m_data[i] - b.m_data[i]) * (a[i] - b[i]);
  }
  return std::sqrt(result);
}
