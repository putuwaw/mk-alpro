#include <stdio.h>
int main(){
	int bil, ans, notFound = 1;
	printf("Input sebuah bilangan : ");
	scanf("%d",&bil);
	ans = bil + 1;
	while(notFound){
		notFound = 0;
		int i;
		for (i = 2; i*i <= ans; i++){
			if (ans % i == 0){
				notFound = 1;
				break;
			}
		}
		notFound == 1 ? ans++ : printf("Bilangan prima yang paling dekat dan lebih besar dari %d adalah %d", bil, ans);
	}
	return 0;
}

