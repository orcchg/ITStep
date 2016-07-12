#include <cstdio>

enum Command {
	TOP = 0, PUSH = 1, POP = 2, PRINT = 3, EXIT = 4
};

int main(int argc, char** argv) {
	while (true) {
		Command c;
		scanf("%i", &c);
		
		switch (c) {
			case TOP:
				printf("TOP\n");
				break;
			case PUSH:
				printf("PUSH\n");
				break;
			case POP:
				printf("POP\n");
				break;
			case PRINT:
				printf("PRINT\n");
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