#include <cstdio>

/* Brackets */
// ----------------------------------------------------------------------------
enum Bracket {
  OPEN1 = '(', CLOSE1 = ')',
  OPEN2 = '[', CLOSE2 = ']',
  OPEN3 = '{', CLOSE3 = '}',
  OPEN4 = '<', CLOSE4 = '>'
};

bool isOpen(Bracket bracket) {
  return bracket == OPEN1 || bracket == OPEN2 || bracket == OPEN3 || bracket == OPEN4;
}

bool isClose(Bracket bracket) {
  return bracket == CLOSE1 || bracket == CLOSE2 || bracket == CLOSE3 || bracket == CLOSE4;
}

Bracket getOpen(Bracket close) {
  switch (close) {
    case CLOSE1:  return OPEN1;
    case CLOSE2:  return OPEN2;
    case CLOSE3:  return OPEN3;
    case CLOSE4:  return OPEN4;
  }
}

/* Stack */
// ----------------------------------------------------------------------------
const int SIZE = 50;

struct StackOverflowException {};
struct StackUnderflowException {};

int head = 0;
Bracket stack[SIZE];

void push(Bracket x) {
  if (head == SIZE) {
    printf("\e[5;00;31mStack Overflow!\e[m\n");
    throw StackOverflowException();
  }

  stack[head++] = x;
}

void pop() {
  if (head == 0) {
    printf("\e[5;00;31mStack Underflow!\e[m\n");
    throw StackUnderflowException();
  }

  --head;
}

Bracket top() {
  if (head == 0) {
    printf("\e[5;00;31mStack Underflow!\e[m\n");
    throw StackUnderflowException();
  }

  return stack[head - 1];
}

bool empty() {
  return head == 0;
}

/* Solution */
// ----------------------------------------------------------------------------
bool isValidSequence(Bracket sequence[], size_t size) {
  size_t sentinel = 0;

  for (size_t i = 0; i < size; ++i) {
    if (isOpen(sequence[i])) {
      push(sequence[i]);
    } else if (isClose(sequence[i])) {
      if (empty()) return false;
      Bracket t = top();
      pop();
      if (t != getOpen(sequence[i])) {
        sentinel = i;
      }
    }
  }

  return sentinel == 0 && empty();
}

/* Main */
// ----------------------------------------------------------------------------
int main(int argc, char** argv) {
  size_t size = 256;
  size_t i = 0;
  int ch = 0;
  Bracket sequence[size];

  while (i < size && (ch = getchar()) != '\n') {
    sequence[i++] = static_cast<Bracket>(ch);
  }

  bool answer = isValidSequence(sequence, i);
  if (answer) {
    printf("\e[5;00;32mOK\e[m\n");
  } else {
    printf("\e[5;00;31mWrong sequence !\e[m\n");
  }

  return 0;
}

