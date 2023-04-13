#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
  char a[5];
  scanf("%s", a);
  int answer = 0, num = atoi(a);
  for (int i = 1; i <= num; ++i) {
    if (i < 100) {
      answer++;
    } 
    else {
      int g = i, p = 0;
      while (g > 0) {
        g /= 10;
        p++;
      }
      char b[5];
      sprintf(b,"%d",i);
      int cnt = (b[0]-48) - (b[1]-48), te = 0;
      for (int j = 1; j < p-1; ++j) {
        if ((b[j]-48) - (b[j+1]-48) == cnt) {
          te = 1;
        } 
        else {
          te = 0;
          break;
        }
      }
      if (te) {
        answer++;
      }
    }
  }
  printf("%d", answer);
  return 0;
}
