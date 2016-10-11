#include <cstdio>

const int SIZE = 5;

struct StackOverflowException {};
struct StackUnderflowException {};

void push2(int x);
void pop2();
int top2();
bool empty2();

int head1 = 0;
int stack1[SIZE];

int head2 = 0;
int stack2[SIZE];

/* Stack 1 */
// ----------------------------------------------------------------------------
void push(int x) {
  if (head1 == SIZE) {
    printf("\e[5;00;31mStack 1 Overflow!\e[m\n");
    throw StackOverflowException();
  }

  stack1[head1++] = x;

  if (empty2() || top2() < x) {
    push2(x);
  } else {
    push2(top2());
  }
}

void pop() {
  if (head1 == 0) {
    printf("\e[5;00;31mStack 1 Underflow!\e[m\n");
    throw StackUnderflowException();
  }

  --head1;
  --head2;
}

int top() {
  if (head1 == 0) {
    printf("\e[5;00;31mStack 1 Underflow!\e[m\n");
    throw StackUnderflowException();
  }

  return stack1[head1 - 1];
}

/* Stack 2 */
// ----------------------------------------------------------------------------
void push2(int x) {
  if (head2 == SIZE) {
    printf("\e[5;00;31mStack 2 Overflow!\e[m\n");
    throw StackOverflowException();
  }

  stack2[head2++] = x;
}

void pop2() {
  if (head2 == 0) {
    printf("\e[5;00;31mStack 2 Underflow!\e[m\n");
    throw StackUnderflowException();
  }

  --head2;
}

int top2() {
  if (head2 == 0) {
    printf("\e[5;00;31mStack 2 Underflow!\e[m\n");
    throw StackUnderflowException();
  }

  return stack2[head2 - 1];
}

bool empty2() {
  return head2 == 0;
}

/* Max in Stack */
// ----------------------------------------------------------------------------
int maxInStack() {
  return top2();
}

void test(bool value) {
  if (value) {
    printf("\e[5;00;32mOK\e[m\n");
  } else {
    printf("\e[5;00;31mError\e[m\n");
  }
}

/* Main */
// ----------------------------------------------------------------------------
int main(int argc, char** argv) {
  /* Test */
  push(1);  test(maxInStack() == 1);
  push(4);  test(maxInStack() == 4);
  push(3);  test(maxInStack() == 4);
  push(7);  test(maxInStack() == 7);
  pop();    test(maxInStack() == 4);
  push(2);  test(maxInStack() == 4);
  pop();    test(maxInStack() == 4);
  pop();    test(maxInStack() == 4);
  pop();    test(maxInStack() == 1);
  return 0;
}

