#include <cstdio>
#include <cstring>

bool isSpace(char ch) {
  return ch == ' ' || ch == '.' || ch == ',';
}

int main(int argc, char** argv) {
  const char* text = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam \
      eleifend condimentum magna imperdiet tristique. Pellentesque fringilla maximus mi vitae \
      ullamcorper. Fusce mattis neque vel nisi fringilla, vel aliquet libero sagittis. Nullam fringilla \
      at mi at accumsan. Suspendisse ullamcorper auctor enim, eu malesuada felis ornare eu. \
      Morbi sodales nunc eget lacus sollicitudin semper. Donec tristique consequat tellus, ut \
      porttitor felis maximus eget. Fusce consectetur iaculis pharetra. Donec congue volutpat \
      arcu, eget sodales sapien tristique quis. Nullam ut posuere risus, sed pharetra lorem. Cras \
      varius, est eu pulvinar scelerisque, ipsum nisi bibendum sapien, in scelerisque velit risus \
      eget felis. Nam nec porttitor erat. Suspendisse dictum sit amet magna finibus lobortis. \
      Phasellus non sem mollis, ultrices odio non, volutpat ligula. Aenean mollis eros ex, vitae \
      lobortis quam gravida sed.";

  int length = strlen(text);
  int words = 0;

  char prev = 0;
  for (int i = 0; i < length; ++i) {
    char ch = text[i];
    if (isSpace(ch)) {
      if (!isSpace(prev)) {
        ++words;
      } 
    }
    prev = ch;
  }

  if (!isSpace(text[length - 1])) ++words;

  printf("Words: %i\n", words);

  return 0;
}

