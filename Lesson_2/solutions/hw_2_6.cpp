#include <cstdio>
#include <clocale>

int main(int argc, char** argv) {
  printf("\nHomework 6\n");

  setlocale(LC_ALL, "rus");
 
  int enterNumber = 0;
 
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

  printf("\n");

  return 0;
}

