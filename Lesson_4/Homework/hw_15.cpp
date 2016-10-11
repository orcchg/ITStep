#include <cstdio>
#include <cstring>

void insertionSort(const char* array[], size_t size) {
  for (size_t i = 1; i < size; ++i) {
     const char* key = array[i];
     int j = i - 1;
     while (j >= 0 && strcmp(array[j], key) > 0) {
         const char* temp = array[j];
         array[j] = array[j + 1];
         array[j + 1] = temp;
         --j;
     }
  }
}

void printArray(const char* array[], size_t size) {
  for (size_t i = 0; i < size; ++i) {
    printf("%s ", array[i]);
  }
  printf("\n");
}

int main(int argc, char** argv) {
  const char* dictionary[] = {"mathematics", "physics", "biology",
         "psychology", "geometry", "geography", "geology",
         "bioinformatics", "science", "scifi", "pharmacology",
         "musics", "analysis", "policy", "geopolicy",
         "politology", "demonology", "demonstations",
         "bioengineering", "modeling", "algebra", "literature",
         "liberation", "listing", "society", "scene", "lighting"};
  size_t size = sizeof(dictionary) / sizeof(char*);

  insertionSort(dictionary, size);
  printArray(dictionary, size);

  return 0;
}

