#include <cstdio>
#include <clocale>

int main(int argc, char** argv) {
  printf("\nHomework 7\n");

  setlocale(LC_ALL, "rus");
 
  int currency, enterNumber = 0;
 
  printf("Введите номер валюты:\n    0 - доллар\n    1 - фунт\n    2 - евро\n    3 - рубль\n    4 - марка\n    5 - франк\n");
  scanf("%i", &currency);

  printf("Введите целое число  (от 1 до 9999): ");
  scanf("%i", &enterNumber);
 
  if (enterNumber <= 0 ||enterNumber > 9999) {
    printf("Число не входит в диапазон от 1 до 9999!\n");
  } else {
    printf("\nВы ввели: ");
  }

  if ((enterNumber / 1000) % 10 == 1) {
    printf("Одна тысяча ");
  } else if ((enterNumber / 1000) % 10 == 2) {
    printf("Две тысячи ");
  } else if ((enterNumber / 1000) % 10 == 3) {
    printf("Три тысячи ");
  } else if ((enterNumber / 1000) % 10 == 4) {
    printf("Четыре тысячи ");
  } else if ((enterNumber / 1000) % 10 == 5) {
    printf("Пять тысяч ");
  } else if ((enterNumber / 1000) % 10 == 6) {
    printf("Шесть тысяч ");
  } else if ((enterNumber / 1000) % 10 == 7) {
    printf("Семь тысяч ");
  } else if ((enterNumber / 1000) % 10 == 8) {
    printf("Восемь тысяч ");
  } else if ((enterNumber / 1000) % 10 == 9) {
    printf("Девять тысяч ");
  }
 
  if ((enterNumber / 100) % 10 == 1) {
    printf("сто ");
  } else if ((enterNumber / 100) % 10 == 2) {
    printf("двести ");
  } else if ((enterNumber / 100) % 10 == 3) {
    printf("триста ");
  } else if ((enterNumber / 100) % 10 == 4) {
    printf("четыреста ");
  } else if ((enterNumber / 100) % 10 == 5) {
    printf("пятьсот ");
  } else if ((enterNumber / 100) % 10 == 6) {
    printf("шестьсот ");
  } else if ((enterNumber / 100) % 10 == 7) {
    printf("семьсот ");
  } else if ((enterNumber / 100) % 10 == 8) {
    printf("восемьсот ");
  } else if ((enterNumber / 100) % 10 == 9) {
    printf("девятьсот ");
  }
 
  if ((enterNumber / 10) % 10 == 1) {
    if (enterNumber % 10 == 0) {
      printf("десять долларов");
    } else if (enterNumber % 10 == 1) {
      printf("одинадцать долларов");
    } else if (enterNumber % 10 == 2) {
      printf("двенадцать долларов");
    } else if (enterNumber % 10 == 3) {
      printf("тринадцать долларов");
    } else if (enterNumber % 10 == 4) {
      printf("четырнадцать долларов");
    } else if (enterNumber % 10 == 5) {
      printf("пятнадцать долларов");
    } else if (enterNumber % 10 == 6) {
      printf("шестнадцать долларов");
    } else if (enterNumber % 10 == 7) {
      printf("семнадцать долларов");
    } else if (enterNumber % 10 == 8) {
      printf("восемнадцать долларов");
    } else if (enterNumber % 10 == 9) {
      printf("девятнадцать долларов");
    }
  }
 
  if ((enterNumber / 10) % 10 == 2) {
    printf("двадцать ");
  } else if ((enterNumber / 10) % 10 == 3) {
    printf("тридцать ");
  } else if ((enterNumber / 10) % 10 == 4) {
    printf("сорок ");
  } else if ((enterNumber / 10) % 10 == 5) {
    printf("пятьдесят ");
  } else if ((enterNumber / 10) % 10 == 6) {
    printf("шестьдесят ");
  } else if ((enterNumber / 10) % 10 == 7) {
    printf("семьдесят ");
  } else if ((enterNumber / 10) % 10 == 8) {
    printf("восемьдесят ");
  } else if ((enterNumber / 10) % 10 == 9) {
    printf("девяносто ");
  }

  switch (currency) {
    case 0:
      if ((enterNumber / 10) % 10 != 1) {
        if (enterNumber % 10 == 0) {
          printf("долларов");
        } else if (enterNumber % 10 == 1) {
          printf("один доллар");
        } else if (enterNumber % 10 == 2) {
          printf("два доллара ");
        } else if (enterNumber % 10 == 3) {
          printf("три доллара ");
        } else if (enterNumber % 10 == 4) {
          printf("четыре доллара ");
        } else if (enterNumber % 10 == 5) {
          printf("пять долларов ");
        } else if (enterNumber % 10 == 6) {
          printf("шесть долларов ");
        } else if (enterNumber % 10 == 7) {
          printf("семь долларов ");
        } else if (enterNumber % 10 == 8) {
          printf("восемь долларов ");
        } else {
          printf("девять долларов ");
        }
      }
      break;
    case 1:
      if ((enterNumber / 10) % 10 != 1) {
        if (enterNumber % 10 == 0) {
          printf("фунтов");
        } else if (enterNumber % 10 == 1) {
          printf("один фунт");
        } else if (enterNumber % 10 == 2) {
          printf("два фунта ");
        } else if (enterNumber % 10 == 3) {
          printf("три фунта ");
        } else if (enterNumber % 10 == 4) {
          printf("четыре фунта ");
        } else if (enterNumber % 10 == 5) {
          printf("пять фунтов ");
        } else if (enterNumber % 10 == 6) {
          printf("шесть фунтов ");
        } else if (enterNumber % 10 == 7) {
          printf("семь фунтов ");
        } else if (enterNumber % 10 == 8) {
          printf("восемь фунтов ");
        } else {
          printf("девять фунтов ");
        }
      }
      break;
    case 2:
      if ((enterNumber / 10) % 10 != 1) {
        if (enterNumber % 10 == 0) {
          printf("евро");
        } else if (enterNumber % 10 == 1) {
          printf("одно евро");
        } else if (enterNumber % 10 == 2) {
          printf("два евро ");
        } else if (enterNumber % 10 == 3) {
          printf("три евро ");
        } else if (enterNumber % 10 == 4) {
          printf("четыре евро ");
        } else if (enterNumber % 10 == 5) {
          printf("пять евро ");
        } else if (enterNumber % 10 == 6) {
          printf("шесть евро ");
        } else if (enterNumber % 10 == 7) {
          printf("семь евро ");
        } else if (enterNumber % 10 == 8) {
          printf("восемь евро ");
        } else {
          printf("девять евро ");
        }
      }
      break;
    case 3:
      if ((enterNumber / 10) % 10 != 1) {
        if (enterNumber % 10 == 0) {
          printf("рублей");
        } else if (enterNumber % 10 == 1) {
          printf("один рубль");
        } else if (enterNumber % 10 == 2) {
          printf("два рубля ");
        } else if (enterNumber % 10 == 3) {
          printf("три рубля ");
        } else if (enterNumber % 10 == 4) {
          printf("четыре рубля ");
        } else if (enterNumber % 10 == 5) {
          printf("пять рублей ");
        } else if (enterNumber % 10 == 6) {
          printf("шесть рублей ");
        } else if (enterNumber % 10 == 7) {
          printf("семь рублей ");
        } else if (enterNumber % 10 == 8) {
          printf("восемь рублей ");
        } else {
          printf("девять рублей ");
        }
      }
      break;
    case 4:
      if ((enterNumber / 10) % 10 != 1) {
        if (enterNumber % 10 == 0) {
          printf("марок");
        } else if (enterNumber % 10 == 1) {
          printf("одна марка");
        } else if (enterNumber % 10 == 2) {
          printf("две марки ");
        } else if (enterNumber % 10 == 3) {
          printf("три марки ");
        } else if (enterNumber % 10 == 4) {
          printf("четыре марки ");
        } else if (enterNumber % 10 == 5) {
          printf("пять марок ");
        } else if (enterNumber % 10 == 6) {
          printf("шесть марок ");
        } else if (enterNumber % 10 == 7) {
          printf("семь марок ");
        } else if (enterNumber % 10 == 8) {
          printf("восемь марок ");
        } else {
          printf("девять марок ");
        }
      }
      break;
    case 5:
      if ((enterNumber / 10) % 10 != 1) {
        if (enterNumber % 10 == 0) {
          printf("франков");
        } else if (enterNumber % 10 == 1) {
          printf("один франк");
        } else if (enterNumber % 10 == 2) {
          printf("два франка ");
        } else if (enterNumber % 10 == 3) {
          printf("три франка ");
        } else if (enterNumber % 10 == 4) {
          printf("четыре франка ");
        } else if (enterNumber % 10 == 5) {
          printf("пять франков ");
        } else if (enterNumber % 10 == 6) {
          printf("шесть франков ");
        } else if (enterNumber % 10 == 7) {
          printf("семь франков ");
        } else if (enterNumber % 10 == 8) {
          printf("восемь франков ");
        } else {
          printf("девять франков ");
        }
      }
      break;
  }

  printf("\n");

  return 0;
}

