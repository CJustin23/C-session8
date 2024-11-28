#include<stdio.h>
int main(){
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int Tong = 0;
	printf("Ma tran:\n");
	for (int i = 0;i < 3;i++){
		for (int j = 0;j < 3;j++){
			printf("%4d",arr[i][j]);
		}
		printf("\n\n");
	}
	printf("Cac phan tu tren duong cheo chinh cua ma tran la: ");
	for (int i = 0;i < 3;i++){
		Tong += arr[i][i];
		printf("%d ", arr[i][i]);
	}
	printf("\nTong cac phan tu tren duong cheo chinh cua ma tran la: %d", Tong);
	
	return 0;
}
