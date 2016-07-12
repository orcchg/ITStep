#include <cstdio>

int top();
void push(int x);
void pop();

int stack[5];
int head = 0;

int top() {
	return stack[head - 1];
}

void push(int x) {
	stack[head] = x;
	++head;
}

void pop() {
	--head;
}

void print() {
	for (int i = 0; i < head; ++i) {
		printf("%i ", stack[i]);
	}
	printf("\n");
}

// -------------------------------------------------------------------------
int main(int argc, char** argv) {
	push(1);
	push(2);
	push(3);
	print();
	pop();
	print();
	pop();
	push(4);
	push(5);
	print();
	pop();
	print();
	return 0;
}
