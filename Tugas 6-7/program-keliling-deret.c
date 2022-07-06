#include <stdio.h>
int main(){
	int pilihan,s1,s2,s3,selisih,batas,jumlah,i;
	printf("Program Keliling dan Deret\n");
	printf("Menu :\n");
	printf("1. Keliling Segitiga\n");
	printf("2. Deret Bilangan\n");
	printf("Pilihan : ");
	scanf("%d",&pilihan);
		if (pilihan == 1){
			printf("Ketik Sisi 1 : ");
			scanf("%d",&s1);
			printf("Ketik Sisi 2 : ");
			scanf("%d",&s2);
			printf("Ketik Sisi 3 : ");
			scanf("%d",&s3);
			printf("Keliling : %d",s1+s2+s3);
		}
		else if (pilihan == 2){
			printf("Ketik Batas atas : ");
			scanf("%d", &batas);
			printf("Ketik Selisih : ");
			scanf("%d", &selisih);
			printf("Ketik jumlah bilangan : ");
			scanf("%d", &jumlah);
			printf("Deret : ");
			for (i = 1; i <= jumlah; i++){
				if (i == 1){
					printf("%d",batas);
				}
				else{
					printf(", %d",batas);
				}
				batas -= selisih;	
			}
		}
		else{
			printf("Input harus 1 dan 2!");
		}
	return 0;
}
