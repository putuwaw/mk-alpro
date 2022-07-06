#include <stdio.h>
int main(){
	int tinggi, lebar, i, j;
	printf("Input tinggi : ");
	scanf("%d", &tinggi);
	printf("Input lebar : ");
	scanf("%d", &lebar);
	printf("Output :\n");
	for (i = 1; i <= tinggi; i++){
		for (j = 1; j <= lebar; j++){
			if (j != 1){
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
