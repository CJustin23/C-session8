#include<stdio.h>
int main(){
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int length = sizeof(arr) / sizeof(arr[0]);
	int Tong = 0;
	printf("Ma tran:\n");
	for (int i = 0;i < 3;i++){
		for (int j = 0;j < 3;j++){
			printf("%4d",arr[i][j]);
		}
		printf("\n\n");
	}
	printf("Cac phan tu tren duong cheo phu cua ma tran la: ");
	for (int i = 0;i < 3;i++){
		Tong += arr[i][length - i - 1];
		printf("%d ", arr[i][length - i - 1]);
	}
	printf("\nTong cac phan tu tren duong cheo phu cua ma tran la: %d", Tong);
	
	return 0;
}
