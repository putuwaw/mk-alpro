#include <stdio.h>
int main(){
    int jumlah;
    printf("Soal No. 3\n");
    printf("Masukkan Jumlah Buku: ");
    scanf("%d", &jumlah);
    fflush(stdin);
    char buku[jumlah][101]; // ASUMSI PANJANG NAMA BUKU < 100 CHAR
    int jumbuku[jumlah], hargabuku[jumlah], total = 0, totalqty = 0;
    float avg;
    printf("Masukkan Nama Buku: \n");
    int i;
    for (i = 0; i < jumlah; i++){
        printf("Nama Buku Ke-%d: ", i + 1);
        gets(buku[i]);
    }
    printf("Masukkan Qty Buku: \n");
    for (i = 0; i < jumlah; i++){
        printf("Qty Buku Ke-%d: ", i + 1);
        scanf("%d", &jumbuku[i]);
        totalqty += jumbuku[i];
    }
    printf("Masukkan Harga Buku: \n");
    int max = hargabuku[0];
    for (i = 0; i < jumlah; i++){
        printf("Harga Buku Ke-%d: ", i + 1);
        scanf("%d", &hargabuku[i]);
        if (hargabuku[i] > max){
            max = hargabuku[i];
        }
        total += (hargabuku[i] * jumbuku[i]);
    }
    avg = (float)total / totalqty;
    printf("|NO\t|Nama Buku\t\t\t\t\t\t|Qty\t\t|Harga\t\t\t|\n");
    for (i = 0; i < jumlah; i++){
        printf("|%d\t|", i + 1);
        printf("%s\t\t\t\t\t\t|", buku[i]);
        printf("%d\t\t|", jumbuku[i]);
        printf("%d\t\t\t|\n", hargabuku[i]);
    }
    printf("\nHarga Buku Maksimum : %d\n", max);
    printf("Total Harga : %d\n", total);
    printf("Rata-Rata : %f", avg);
    return 0;
}
