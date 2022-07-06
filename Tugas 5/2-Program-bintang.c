// Program bintang :
// Input tinggi	: 6
// Input lebar	: 4
// Output		:
//    *
//   **
//  ***
// ****
// ****
// ****

#include <stdio.h>
int main(){
	int i,j,a,t,l;
	printf("Program bintang :\n");
	printf("Input tinggi\t: ");
	scanf("%d",&t);
	printf("Input lebar\t: ");
	scanf("%d",&l);
	printf("Output\t\t:\n");
	
	for (i = 1; i <= t; i++){
		for (a = (l-i); a > 0; a--){
			printf(" ");
		}
		for (j = 1; j <= i && j <= l; j++){
			printf("*");
		}	
		printf("\n");
	}
	return 0;
}
