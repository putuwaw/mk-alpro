#include <stdio.h>
int main(){
	int awal, jumlah, a = 0, b = 1, sum;
	printf("Program Deret Fibonaci\n");
	printf("Ketik suku awal yang dicetak : ");
	scanf("%d", &awal);
	printf("Ketik jumlah suku dicetak : ");
	scanf("%d", &jumlah);
	printf("Deret Fibonaci :\n");
	while (--awal + jumlah){
		sum = a+b;
		a = b;
		b = sum;
		if (awal <= 0){
			if (awal == 0){
				printf("%d", a);
			}
			else{
				printf(", %d", a);
			}
		}
	}
	return 0;
}

