#include <stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if (a > b){
		a = a - b;
		b = a + b;
		a = b - a;
	}
	a++;
	while(a < b){
		if (a % 2 == 1){
			printf("%d ",a);
			a += 2;
		}
		else{
			a++;
		}
	}
	return 0;
}
