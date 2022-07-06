#include <stdio.h>
int main(){
  int a = 0,b = 1,sum = 0,n;
  scanf("%d",&n);
  while(n--){
  	sum = a + b;
  	a = b;
  	b = sum;
  	printf("%d ",a);
  }
  return 0;
}

