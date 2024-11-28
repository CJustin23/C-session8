#include <stdio.h>
int main() {
    int n, most;
    int max = 0;
    printf("Hay nhap so phan tu cua mang: ");
    scanf("%d", &n);
    if (n <= 0){
    	printf("So phan tu phai la so nguyen duong\n");
	}
	else{
		int arr[n];
        printf("Hay nhap cac phan tu cua mang:\n");
        for (int i = 0; i < n; i++) {
            printf("Phan tu %d: ", i + 1);
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }
            if (count > max) {
                max = count;
                most = arr[i];
            }
        }
        printf("Phan tu xuat hien nhieu nhat trong mang la %d voi %d lan\n", most, max);
	}

    return 0;
}
