#include <cstdio>

int stack[5];
int head = 0;

int top() {
	if (head == 0) {
		printf("Stack Underflow!!!");
		throw;
	}
	if (head >= 5) {
		printf("Stack Overflow!!!");
		throw;
	}
	return stack[head - 1];
}

void push(int x) {
	if (head >= 5) {
		printf("Stack Overflow!!!");
		return;
	}
	stack[head] = x;
	++head;
}

void pop() {
	if (head == 0) {
		printf("Stack Underflow!!!");
		return;
	}
	--head;
}

void print() {
	for (int i = 0; i < head; ++i) {
		printf("%i ", stack[i]);
	}
	printf("\n");
}

// -----------------------------------------------------------------------
enum Command {
	TOP = 0, PUSH = 1, POP = 2, PRINT = 3, EXIT = 4
};

int main(int argc, char** argv) {
	while (true) {
		Command c;
		scanf("%i", &c);
		
		switch (c) {
			case TOP:
				// printf("TOP\n");
				printf("TOP: %i\n", top());
				break;
			case PUSH:
				// printf("PUSH\n");
				int value;
				scanf("%i", &value);
				push(value);
				break;
			case POP:
				// printf("POP\n");
				pop();
				break;
			case PRINT:
				// printf("PRINT\n");
				print();
				break;
			case EXIT:
				printf("EXIT\n");
				return 0;
			default:
				printf("Wrong command!\n");
				break;
		}
	}
	
	return 0;
}