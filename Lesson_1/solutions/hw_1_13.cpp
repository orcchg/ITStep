#include <cstdio>
#include <cmath>

const int array[2][13] = {0,31,28,31,30,31,30,31,31,30,31,30,31, 
                          0,31,29,31,30,31,30,31,31,30,31,30,31};
						  
bool is_visok(int year) {
  return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
}

int main(int argc, char** argv) {
  printf("\nHomework 13\n");

  int day, mon, year;
  printf("Enter day/month/year: ");
  scanf("%d %d %d", &day, &mon, &year);

  int base = 0;

  for(int i = 1; i <= year; ++i) {
    if (i != 1 && is_visok(i-1)) {
      base += 366;
    } else {
      base += 365;
    }
  }

  base = base % 7 - 1;
	
  int point, day_of_year = 0, day_of_week = 0;
  point = (int) is_visok(year);
  for(int i = 1; i < mon; ++i) {
    day_of_year += array[point][i];
  }

  day_of_year += day;
  day_of_week = day_of_year % 7;
	
  switch(day_of_week + base) {
    case 1:
    case 8:
      printf("Monday\n");
      break;
    case 2:
    case 9:
      printf("Tuesday\n");
      break;
    case 3:
    case 10:
      printf("Wednesday\n");
      break;
    case 4:
    case 11:
      printf("Thursday\n");
      break;
    case 5:
    case 12:
      printf("Friday\n");
      break;
    case 6:
    case 13:
      printf("Saturday\n");
      break;
    case 0:
    case 7:
      printf("Sunday\n");
      break;
    default:
      printf("Error!");
      break;
  }

  return 0;
}

