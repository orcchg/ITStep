#include <cstdio>

const int SIZE = 10;

struct StackOverflowException {};
struct StackUnderflowException {};

/* Stack 1 */
// ----------------------------------------------------------------------------
int head1m = 0;
int stack1m[SIZE];

void push1m(int x) {
  if (head1m == SIZE) {
    printf("\e[5;00;31mStack 1m Overflow!\e[m\n");
    throw StackOverflowException();
  }

  stack1m[head1m++] = x;
}

void pop1m() {
  if (head1m == 0) {
    printf("\e[5;00;31mStack 1m Underflow!\e[m\n");
    throw StackUnderflowException();
  }

  --head1m;
}

int top1m() {
  if (head1m == 0) {
    printf("\e[5;00;31mStack 1m Underflow!\e[m\n");
    throw StackUnderflowException();
  }

  return stack1m[head1m - 1];
}

bool empty1m() {
  return head1m == 0;
}

// ----------------------------------------------
int head1 = 0;
int stack1[SIZE];

void push1(int x) {
  if (head1 == SIZE) {
    printf("\e[5;00;31mStack 1 Overflow!\e[m\n");
    throw StackOverflowException();
  }

  stack1[head1++] = x;

  if (empty1m() || top1m() < x) {
    push1m(x);
  } else {
    push1m(top1m());
  }
}

void pop1() {
  if (head1 == 0) {
    printf("\e[5;00;31mStack 1 Underflow!\e[m\n");
    throw StackUnderflowException();
  }

  --head1;
  --head1m;
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
int head2m = 0;
int stack2m[SIZE];

void push2m(int x) {
  if (head2m == SIZE) {
    printf("\e[5;00;31mStack 2m Overflow!\e[m\n");
    throw StackOverflowException();
  }

  stack2m[head2m++] = x;
}

void pop2m() {
  if (head2m == 0) {
    printf("\e[5;00;31mStack 2m Underflow!\e[m\n");
    throw StackUnderflowException();
  }

  --head2m;
}

int top2m() {
  if (head2m == 0) {
    printf("\e[5;00;31mStack 2m Underflow!\e[m\n");
    throw StackUnderflowException();
  }

  return stack2m[head2m - 1];
}

bool empty2m() {
  return head2m == 0;
}

// ----------------------------------------------
int head2 = 0;
int stack2[SIZE];

void push2(int x) {
  if (head2 == SIZE) {
    printf("\e[5;00;31mStack 2 Overflow!\e[m\n");
    throw StackOverflowException();
  }

  stack2[head2++] = x;

  if (empty2m() || top2m() < x) {
    push2m(x);
  } else {
    push2m(top2m());
  }
}

void pop2() {
  if (head2 == 0) {
    printf("\e[5;00;31mStack 2 Underflow!\e[m\n");
    throw StackUnderflowException();
  }

  --head2;
  --head2m;
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

void test(bool value) {
  if (value) {
    printf("\e[5;00;32mOK\e[m\n");
  } else {
    printf("\e[5;00;31mError\e[m\n");
  }
}

/* Max in Queue */
// ----------------------------------------------------------------------------
int maxInQueue() {
  if (empty1m() && !empty2m()) return top2m();
  if (!empty1m() && empty2m()) return top1m();

  if (top1m() > top2m()) {
    return top1m();
  } else {
    return top2m();
  }
}

/* Main */
// ----------------------------------------------------------------------------
int main(int argc, char** argv) {
  enqueue(5);  printQueue();  test(maxInQueue() == 5);   // 5
  enqueue(4);  printQueue();  test(maxInQueue() == 5);   // 4 5
  enqueue(3);  printQueue();  test(maxInQueue() == 5);   // 3 4 5
  enqueue(2);  printQueue();  test(maxInQueue() == 5);   // 2 3 4 5
  enqueue(1);  printQueue();  test(maxInQueue() == 5);   // 1 2 3 4 5
  enqueue(0);  printQueue();  test(maxInQueue() == 5);   // 0 1 2 3 4 5
  dequeue();   printQueue();  test(maxInQueue() == 4);   // 0 1 2 3 4
  dequeue();   printQueue();  test(maxInQueue() == 3);   // 0 1 2 3
  dequeue();   printQueue();  test(maxInQueue() == 2);   // 0 1 2
  enqueue(7);  printQueue();  test(maxInQueue() == 7);   // 7 0 1 2
  enqueue(8);  printQueue();  test(maxInQueue() == 8);   // 8 7 0 1 2
  dequeue();   printQueue();  test(maxInQueue() == 8);   // 8 7 0 1
  return 0;
}

