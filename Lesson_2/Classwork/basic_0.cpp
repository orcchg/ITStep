#include <cstdio>

void dayOfWeek(int day) {
	switch (day) {
		case 1:
			printf("Monday\n");
			break;
		case 2:
			printf("Tuesday\n");
			break;
		case 3:
			printf("Wednesday\n");
			break;
		case 4:
			printf("Thursday\n");
			break;
		case 5:
			printf("Friday\n");
			break;
		case 6:
			printf("Saturday\n");
			break;
		case 7:
			printf("Sunday\n");
			break;
		default:
			printf("Wrong argument!\n");
			break;
	}
}

int main(int argc, char** argv) {
	
	int x = 0;
	
	printf("%i", x);
	
	scanf("%i", &x);
	
	dayOfWeek(x);
	
	return 0;
}



