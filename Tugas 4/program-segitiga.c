#include <stdio.h>
int main(){
	int alas,tinggi;
	printf("Ketik Alas : ");
	scanf("%d",&alas);
	printf("Ketik Tinggi : ");
	scanf("%d",&tinggi);
	printf("Luas Segitiga dengan Alas %d dan Tinggi %d adalah %0.1f",alas,tinggi,(alas * tinggi / (float)2));
	return 0;
}
