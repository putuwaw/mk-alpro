#include <stdio.h>
int main(){
    int pil;
    printf("Pilihan :\n");
    printf("1. Hitung Belanja\n");
    printf("2. Buat Deret Menaik\n");
    printf("Pilihan : ");
    scanf("%d", &pil);
    if (pil == 1){
        int belanja, bayar;
        printf("Ketik jumlah Belanja : ");
        scanf("%d", &belanja);
        printf("Ketik Jml Bayar : ");
        scanf("%d", &bayar);
        printf("Kembalian : %d", bayar-belanja);
    }
    else if (pil == 2){
        int awal, akhir, kelipatan;
        printf("Bil Awal : ");
        scanf("%d", &awal);
        printf("Bil Akhir : ");
        scanf("%d", &akhir);
        printf("Kelipatan : ");
        scanf("%d", &kelipatan);
        printf("Deret : ");
        while(awal <= akhir){
            printf("%d ", awal);
            awal += kelipatan;
        }
    }
}