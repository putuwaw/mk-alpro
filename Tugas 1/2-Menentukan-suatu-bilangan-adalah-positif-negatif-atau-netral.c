#include <stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	if (x < 0){
		printf("negatif");
	}
	else if(x == 0){
		printf("netral");
	}
	else{
		printf("positif");
	}
	return 0;
}
