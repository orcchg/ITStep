#include <cstdio>
#include <cmath>

int main() {
  long long N, a, b, c, i = 0;
  
  scanf("%li", &N);
  printf("\n");
	
  for (a = sqrt(N); a*a >= N/3; a--) {
    for (b = sqrt(N-a*a); b > 0; b--) {
      c = sqrt(N - a*a - b*b);
      if (a*a + b*b + c*c == N) {
        printf("yes\n");
        return 0;
      } else { 
        printf("no\n");
        return 0;
      }
    }
  }
  return 0;
}

