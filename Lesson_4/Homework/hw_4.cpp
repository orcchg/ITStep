#include <cstdio>

/* Brackets */
// ----------------------------------------------------------------------------
enum Bracket {
  OPEN = '(', CLOSE = ')'
};

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
    switch (sequence[i]) {
      case OPEN:
        push(sequence[i]);
        break;
      case CLOSE:
        if (empty()) return false;
        Bracket t = top();
        pop();
        if (t != OPEN) {
          sentinel = i;
        }
        break;
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

