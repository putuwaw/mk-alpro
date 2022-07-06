#include <stdio.h>
int main(){
    int pil, awal, akhir, sum = 0;
    printf("Program Bilangan Ganjil\n");
    printf("1. Menurun\n");
    printf("2. Menaik\n");
    printf("Pilihan : ");
    scanf("%d", &pil);
    printf("Ketik Bil Batas Awal : ");
    scanf("%d", &awal);
    printf("Ketik Bil Batas Akhir : ");
    scanf("%d", &akhir);
    if (pil == 1){
        printf("Deret Ganjil = ");
        awal--;
        if (awal % 2 == 0){
            awal--;
        }
        while(awal > akhir){    
            printf("%d ", awal);
            sum += awal;
            awal -= 2;
        }
        printf("\nJumlah deret : %d", sum);
    }
    else if (pil == 2){
        printf("Deret Ganjil = ");
        awal++;
        if (awal % 2 == 0){
            awal++;
        }
        while(awal < akhir){
            printf("%d ", awal);
            sum += awal;
            awal += 2;
        }
        printf("\nJumlah deret : %d", sum);
    }
    return 0;
}