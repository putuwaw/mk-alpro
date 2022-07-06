#include <stdio.h>
int B1, K1, B2, K2;

int getMatrix(int (*arrA)[K1], int (*arrB)[K2], int (*arrC)[K2], int i, int j, int counter){
	int a = 0, b = 0, result = 0;
	while (counter--){
		result = result + (arrA[i][a] * arrB[b][j]);
		a++;
		b++;
	}
	arrC[i][j] = result;
	return result;
}

int main(){
	printf("Program Perkalian Matriks (kolom matriks A = baris matriks B)\n\n");
	printf("Ketik Ukuran Matriks A\n");
	printf("Baris = ");
	scanf("%d", &B1);
	printf("Kolom = ");
	scanf("%d", &K1);
	int arrA[B1][K1];
	
	printf("Ketik Ukuran Matriks B\n");
	printf("Baris = ");
	scanf("%d", &B2);
	printf("Kolom = ");
	scanf("%d", &K2);
	int arrB[B2][K2];
	
	printf("Ketik elemen Matriks A\n");
	int i,j;
	for (i = 0; i < B1; i++){
		for (j = 0; j < K1; j++){
			printf("A[%d][%d] = ", i, j);
			scanf("%d", &arrA[i][j]);
		}
	}
	printf("Ketik elemen Matriks B\n");
	for (i = 0; i < B2; i++){
		for (j = 0; j < K2; j++){
			printf("A[%d][%d] = ", i, j);
			scanf("%d", &arrB[i][j]);
		}
	}
	printf("Hasil Perkalian Matriks (C = A x B)\n");
	int arrC[B1][K2];
	for (i = 0; i < B1; i++){
		for (j = 0; j < K2; j++){
			printf("C[%d][%d] = %d\n", i, j, getMatrix(arrA, arrB, arrC, i, j, K1));
		}
	}
	return 0;
}
