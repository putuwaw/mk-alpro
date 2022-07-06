#include <stdio.h>
int main(){
	int awal, akhir, kategori, baris, N, init;;
	printf("Program deret bilangan :\n");
	printf("Input Bilangan awal : "); 
	scanf("%d", &awal);
	printf("Input Bilangan akhir : "); 
	scanf("%d", &akhir);
	printf("Ketik kategori bilangan (1:ganjil, 2:genap) : "); 
	scanf("%d", &kategori);
	printf("Ketik jumlah baris pengulangan : "); 
	scanf("%d", &baris);
	awal++;
	if (kategori == 1){
		if (awal % 2 == 0){
			awal++;
		}
	}
	else if (kategori == 2){
		if (awal % 2 == 1){
			awal++;
		}
	}
	for (N = 1; N <= baris; N++){
		for (init = awal; init < akhir; init += 2){
			printf("%d ",init);
		}
		printf("\n");
	}
	return 0;
}
