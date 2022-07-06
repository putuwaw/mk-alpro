#include <stdio.h>
int main(){
    int tinggi;
    printf("(inputan harus ganjil)\n");
    printf("Tinggi : ");
    scanf("%d", &tinggi);
    printf("Output : \n");
    int i, counter = tinggi + 2, cek = 1;
    for (i = 1; i <= tinggi; i++){
        int j;
        if (counter == 1){
            cek = 0;
        }
        if (cek == 1){
            counter -= 2;
        }
        else{
            counter += 2;
        }
        for (j = 1; j <= tinggi; j++){
            if (j % 2 == 1 && j >= counter){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
