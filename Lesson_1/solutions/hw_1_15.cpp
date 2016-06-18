#include <cstdio>

bool isVisok(int year) {
  return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
}

int main(int argc, char** argv) {
  printf("\nHomework 15\n");

  long long timestamp;
  scanf("%lli", &timestamp);

  int minutes = timestamp / 60000;
  int hours = minutes / 60;
  int days = hours / 24;

  int current_year = 1970;

  while (days >= 365) {
    if (isVisok(current_year)) {
      days -= 366;
    } else {
      days -= 365;
    }
    ++current_year;
  }

  int array[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (isVisok(current_year)) {
    array[1] += 1;  // February has 29 days
  }

  int i = 0;
  while (days > 28) {
    days -= array[i];
    ++i;
  }

  printf("%i ", days + 1);
  switch (i) {
    case 0: printf("January"); break;
    case 1: printf("February"); break;
    case 2: printf("March"); break;
    case 3: printf("April"); break;
    case 4: printf("May"); break;
    case 5: printf("June"); break;
    case 6: printf("July"); break;
    case 7: printf("August"); break;
    case 8: printf("September"); break;
    case 9: printf("October"); break;
    case 10: printf("November"); break;
    case 11: printf("December"); break;
  }

  printf(" %i  %i:", current_year, hours % 24);
  if (minutes % 60 < 10) {
    printf("0");
  }
  printf("%i\n", minutes % 60);

  return 0;
}

