#include <stdio.h>
int main(void){
  printf("1\n");
  int n=2;
  while(n<=10000){
    int ans=0;
    for(int i=1;i<n;i++){
      int sum=i,q=i; 
      while(q){
        if(sum>n) break;
        sum += q % 10;
	q /= 10;
      }
      if(sum==n) {
        ans++;
        break;
      }
    }
    if(ans==0) printf("%d\n",n);
    n++;
  }
  return 0;
}

