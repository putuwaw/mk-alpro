// Program bilangan prima
// Input sebuah bilangan : 15
// Deret bilangan prima sampai 20 : 2, 3, 5, 7, 11, 13

#include <stdio.h>
int main(){
	int num, isPrime, i,j;
	printf("Program bilangan prima\n");
	printf("Input sebuah bilangan : ");
	scanf("%d",&num);
	printf("Deret bilangan prima sampai %d : ",num);
	for (i = 2; i <= num; i++){
	isPrime = 1;
		for (j = 2; j*j <= i; j++){
			if (i % j == 0){
				isPrime = 0;
				break;
			}
		}
		if (isPrime == 1 && i == 2){
			printf("%d",i);
		}
		else if (isPrime == 1){
			printf(", %d",i);
		}
	}
	return 0;
}
