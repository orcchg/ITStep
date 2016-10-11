#include <cstdio>
#include <cstring>

int main(int argc, char** argv) {
  const char* dictionary[] = {"mathematics", "physics", "biology",
         "psychology", "geometry", "geography", "geology",
         "bioinformatics", "science", "scifi", "pharmacology",
         "musics", "analysis", "policy", "geopolicy",
         "politology", "demonology", "demonstations",
         "bioengineering", "modeling", "algebra", "literature",
         "liberation", "listing", "society", "scene", "lighting"};
  size_t size = sizeof(dictionary) / sizeof(char*);

  char str[32];
  for (int i = 0; i < 32; ++i) str[i] = 0;

  scanf("%s", str);

  for (size_t i = 0; i < size; ++i) {
    if (strstr(dictionary[i], str) == dictionary[i]) {
      printf("%s\n", dictionary[i]);
    }
  }

  return 0;
}

