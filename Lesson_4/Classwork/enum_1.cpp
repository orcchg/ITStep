#include <cstdio>
#include <cstring>

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
				printf("\e[00;32mTOP\n\e[m");
				break;
			case PUSH:
				printf("\e[00;36mPUSH\n\e[m");
				break;
			case POP:
				printf("\e[00;35mPOP\n\e[m");
				break;
			case PRINT:
				printf("\e[00;34mPRINT\n\e[m");
				break;
			case EXIT:
				printf("\e[00;31mEXIT\n\e[m");
				return 0;
			case UNKNOWN:
			default:
				printf("\e[00;33mWrong command!\n\e[m");
				break;
		}
	}
	
	return 0;
}