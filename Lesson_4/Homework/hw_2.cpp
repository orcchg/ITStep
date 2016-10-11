#include <cstdio>

const int SIZE = 10;

struct StackOverflowException {};
struct StackUnderflowException {};

/* Stack 1 */
// ----------------------------------------------------------------------------
int head1 = 0;
int stack1[SIZE];

void push1(int x) {
  if (head1 == SIZE) {
    printf("\e[5;00;31mStack 1 Overflow!\e[m\n");
    throw StackOverflowException();
  }

  stack1[head1++] = x;
}

void pop1() {
  if (head1 == 0) {
    printf("\e[5;00;31mStack 1 Underflow!\e[m\n");
    throw StackUnderflowException();
  }

  --head1;
}

int top1() {
  if (head1 == 0) {
    printf("\e[5;00;31mStack 1 Underflow!\e[m\n");
    throw StackUnderflowException();
  }

  return stack1[head1 - 1];
}

bool empty1() {
  return head1 == 0;
}

/* Stack 2 */
// ----------------------------------------------------------------------------
int head2 = 0;
int stack2[SIZE];

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

/* Queue */
// ----------------------------------------------------------------------------
int head() {
  return top2();
}

int tail() {
  return top1();
}

void enqueue(int x) {
  push1(x);
}

void dequeue() {
  if (empty2()) {
    while (head1 > 0) {
      int x = top1();
      push2(x);
      pop1();
    }
  }
  pop2();
}

/* Test */
// ----------------------------------------------------------------------------
void printQueue() {
  for (int i = head1 - 1; i >= 0; --i) {
    printf("%i ", stack1[i]);
  }
  for (int i = 0; i < head2; ++i) {
    printf("%i ", stack2[i]);
  }
  printf("\n");
}

void test(int sum) {
  int s = 0;
  for (int i = 0; i < head1; ++i) {
    s += stack1[i];
  }
  for (int i = 0; i < head2; ++i) {
    s += stack2[i];
  }
  if (s == sum) {
    printf("\e[5;00;32mOK\e[m\n");
  } else {
    printf("\e[5;00;31mError\e[m\n");
  }
}

/* Main */
// ----------------------------------------------------------------------------
int main(int argc, char** argv) {
  enqueue(5);  printQueue();  test(5);   // 5
  enqueue(4);  printQueue();  test(9);   // 4 5
  enqueue(3);  printQueue();  test(12);  // 3 4 5
  enqueue(2);  printQueue();  test(14);  // 2 3 4 5
  enqueue(1);  printQueue();  test(15);  // 1 2 3 4 5
  enqueue(0);  printQueue();  test(15);  // 0 1 2 3 4 5
  dequeue();   printQueue();  test(10);  // 0 1 2 3 4
  dequeue();   printQueue();  test(6);   // 0 1 2 3
  dequeue();   printQueue();  test(3);   // 0 1 2
  enqueue(7);  printQueue();  test(10);  // 7 0 1 2
  enqueue(8);  printQueue();  test(18);  // 8 7 0 1 2
  dequeue();   printQueue();  test(16);  // 8 7 0 1
  return 0;
}

