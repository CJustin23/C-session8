#include<stdio.h>
int main(){
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int Tong = 0;
	printf("Duong bien ma tran la:\n");
	for (int i = 0;i < 3;i++){
		for (int j = 0;j < 3;j++){
			if((j != 0 && i != 0) && (j != 2 && i != 2)){
				printf("   ");
				continue;
			}
			else{
				Tong = Tong + arr[i][j];
				printf("%d  ",arr[i][j]);
			}
		}
		printf("\n\n");
	}
	printf("Tong cac so theo duong bien ma tran la: %d", Tong);
	
	return 0;
}
