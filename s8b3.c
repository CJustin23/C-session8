#include <stdio.h>
int main() {
    int n;
    printf("Hay nhap vao 1 so nguyen duong: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("So nhap vao phai la so nguyen duong\n");
    }
    else{
    	int arr[n][n];
        printf("Nhap cac phan tu cho mang %dx%d:\n", n, n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("Phan tu [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &arr[i][j]);
            }
        }   
        printf("Ma tran vua nhap la:\n");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d  ", arr[i][j]);
            }
        printf("\n");
        }
	}

    return 0;
}
