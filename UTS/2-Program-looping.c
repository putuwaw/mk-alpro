// Nama : Putu Widyantara Artanta Wibawa
// NIM : 2108561005
// Kls : E
#include <stdio.h>
int main(){
    // 2. Program Looping dengan for, while, dan do-while untuk kasus:
    int awal, akhir, i;
    printf("Deret Menurun :\n");
    printf("Ketik bil awal : "); scanf("%d",&awal);
    printf("Ketik bil akhir : "); scanf("%d",&akhir);
    printf("dengan for : ");
    for (i = awal; i >= akhir; i--){
        printf("%d",i);
        if (i != akhir){
            printf(" ");
        }
    }
    printf("\n");
    printf("dengan while : ");
    i = awal;
    while(i >= akhir){
        printf("%d",i);
        if (i != akhir){
            printf(" ");
        }
        i--;
    }
    printf("\n");
    printf("dengan do-while : ");
    do{
        printf("%d",awal);
        if (awal != akhir){
            printf(" ");
        }
        awal--;
    }while(awal >= akhir);
    return 0;
}