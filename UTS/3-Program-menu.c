// Nama : Putu Widyantara Artanta Wibawa
// NIM : 2108561005
// Kls : E
#include <stdio.h>
int main(){
    // 3. Program Menu
    int pil;
    printf("Pilih Menu Deret :\n");
    printf("1 Bilangan Fibonaci terbalik\n");
    printf("2 Persegi Bilangan menaik\n");
    printf("Ketik Pilihan : "); scanf("%d",&pil);
    if (pil == 1){
        int suku, i;
        printf("Ketik jumlah suku : "); scanf("%d",&suku);
        int fibo[suku+1];
        fibo[1] = 1;
        fibo[2] = 1;
        for (i = 3; i <= suku; i++){
            fibo[i] = fibo[i-1] + fibo[i-2];
        }
        for (i = suku; i > 0; i--){
            printf("%d", fibo[i]);
            if (i != 1){
                printf(" - ");
            }
        }
    }
    else if (pil == 2){
        int kelipatan, awal, batas, samping, i;
        printf("Ketik Kelipatan : "); scanf("%d",&kelipatan);
        printf("Ketik Bil Awal : "); scanf("%d",&awal);
        printf("Ketik Bil Batas : "); scanf("%d",&batas);
        printf("Jml Kesamping : "); scanf("%d",&samping);
        printf("Deret Menaik =\n");
        while (awal <= batas){
            for (i = 1; i <= samping; i++){
                printf("%d",awal);
                if (i != samping){
                    printf(" ");
                }
            }
            printf("\n");
            awal += kelipatan;
        }
    }
    else{
        printf("Input harus 1 atau 2!");
    }
    return 0;
}