#include <cstdio>

int main(int argc, char** argv) {
	
	char array[64];
	
	char* str = &array[0];
	
	scanf("%s", str);
	
	for (int i = 0; i < 64; ++i) {
		printf("%c", array[i]);
	}
	printf("\n");
	
	return 0;
}
