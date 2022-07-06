#include <stdio.h>
int n;

int max(int* arr){
	int i, ans = arr[0];
	for (i = 1; i < n; i++){
		if (arr[i] > ans){
			ans = arr[i];
		}
	}
	return ans;
}

int min(int* arr){
	int i, ans = arr[0];
	for (i = 1; i < n; i++){
		if (arr[i] < ans){
			ans = arr[i];
		}
	}
	return ans;
}

float avg(int* arr){
	int i, total = 0;
	for (i = 0; i < n; i++){
		total += arr[i];
	}
	return (float)total/n;
}

int main(){
	printf("Ketik Jumlah Bilangan : ");
	scanf("%d", &n);
	int arr[n], i;
	for (i = 0; i < n; i++){
		printf("Bil - %d : ", i+1);
		scanf("%d", &arr[i]);	
	}
	printf("Nilai Maks : %d\n", max(arr));
	printf("Nilai Min : %d\n", min(arr));
	printf("Nilai Rataan : %f", avg(arr));
	return 0;
}
