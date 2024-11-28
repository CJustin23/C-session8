#include<stdio.h>
int main(){
	int arr[] = {1, 2, 3, 4, 5};
	int n;
	int length = sizeof(arr) / sizeof(arr[0]);
	int count = 0;
	printf("Hay nhap phan tu ban muon kiem tra: ");
	scanf("%d",&n);
	for (int i = 0;i < length;i++){
		if (n != arr[i]){
			count++;
            continue;
		}
		else{
			printf("Vi tri phan tu %d trong mang la %d\n", n, i + 1);
			break;
		}
	}
	if (count == length){
		printf("Phan tu khong ton tai trong mang\n");
	}
	
	return 0;
}
