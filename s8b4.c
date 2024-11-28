#include<stdio.h>
int main(){
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int max = 0;
	for (int i = 0;i < 3;i++){
		for (int j = 0;j < 3;j++){
			if(arr[i][j] > max){
				max = arr[i][j];
			}
		}
	}
	printf("Phan tu lon nhat trong mang la: %d\n", max);
	
	return 0;
}
