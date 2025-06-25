#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    // Nhập số lượng phần tử trong mảng
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    // Cấp phát
    int *arr = (int *)malloc(n*sizeof(int));
    // Kiểm tra cấp phát
    if (arr == NULL){
        printf("Khong the tao mang");
        return 1;
    }
    //Nhập từng phần tử vào mảng
    for(int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    // Tìm và in ra các cặp phần tử đối xứng
    int found = 0;
    for(int i = 0; i < n / 2; i++){
        if(arr[i] == arr[n-1-i]){
            printf("Cap doi xung: (%d,%d)\n",arr[i],arr[n - 1-i]);
            found = 1;
        }
    }
    //Nếu không thì in ra
    if (!found){
        printf("Khong co phan tu doi xung");
    }
    free(arr);
    return 0;
}
