#include <cstdio>
#include <cstring>

int stack[5];
int head = 0;

int top() {
	if (head == 0) {
		printf("\e[01;31mStack Underflow!!!\e[m");
		throw;
	}
	if (head >= 5) {
		printf("\e[01;31mStack Overflow!!!\e[m");
		throw;
	}
	return stack[head - 1];
}

void push(int x) {
	if (head >= 5) {
		printf("\e[01;31mStack Overflow!!!\e[m");
		return;
	}
	stack[head] = x;
	++head;
}

void pop() {
	if (head == 0) {
		printf("\e[01;31mStack Underflow!!!\e[m");
		return;
	}
	--head;
}

void print() {
	for (int i = 0; i < head; ++i) {
		printf("\e[01;32m%i \e[m", stack[i]);
	}
	printf("\n");
}

enum Command {
	TOP = 0, PUSH = 1, POP = 2, PRINT = 3, EXIT = 4, UNKNOWN = -1
};

int main(int argc, char** argv) {
	
	while (true) {
		char array[6];
		char* str = &array[0];
		scanf("%s", str);
		
		Command c;
		if (strcmp(str, "top") == 0) {
			c = TOP;
		} else if (strcmp(str, "push") == 0) {
			c = PUSH;
		} else if (strcmp(str, "pop") == 0) {
			c = POP;
		} else if (strcmp(str, "print") == 0) {
			c = PRINT;
		} else if (strcmp(str, "exit") == 0) {
			c = EXIT;
		} else {
			c = UNKNOWN;
		}
		
		switch (c) {
			case TOP:
				printf("\e[00;32m%i\n\e[m", top());
				break;
			case PUSH:
				int value;
				scanf("%i", &value);
				push(value);
				break;
			case POP:
				pop();
				break;
			case PRINT:
				print();
				break;
			case EXIT:
				return 0;
			case UNKNOWN:
			default:
				printf("\e[00;33mWrong command!\n\e[m");
				break;
		}
	}
	
	return 0;
}