#include <stdio.h>

int sum, bil, awal = 1; //global var

void getSumDeret(int n){
    if (n == 0){
        printf("= %d", sum); // base case
    }
    else{
        if (n != bil){
            printf(" ");
        }
        printf("%d ", awal);
        if (n != 1){
            printf("+");
        }
        sum += awal;
        awal += 2;
        n--;
        getSumDeret(n); // rekurens
    }
}

int main(){
    printf("Fungsi rekursif :\n");
    printf("Program penjumlahan deret :\n");
    printf("Ketik jum bil ganjil : ");
    scanf("%d", &bil);
    printf("Sum Deret : ");
    getSumDeret(bil);
    return 0;
}
