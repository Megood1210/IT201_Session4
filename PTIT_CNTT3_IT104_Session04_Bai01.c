#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    // Nhap sô lượng phần tử trong mảng
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    // Cấp phát
    int* array = (int *)malloc(n*sizeof(int));
    // Kiểm tra cấp phát
    if (array == NULL){
        printf("Khong the tao mang");
        exit(1);
    }

    //Nhập từng phần tử vào mảng
    for(int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &array[i]);
    }
    //Nhập số cần tìm
    int m;
    printf("Nhap so can tim: ");
    scanf("%d", &m);
    //Khai báo biến found để tránh in ra "không tim thay phan tu" nhiều lần
    int found = 0;
    // Duyệt qua mảng để tìm số và in ra số
    for (int i = 0; i < n; i++) {
        if(m == array[i]) {
            printf("%d",i);
            printf(", ");
            found = 1;
            break;
        }
    }
    // Không tìm thấy thì in ra
    if(!found){
        printf("Khong tim thay phan tu");
    }
    free(array);
    return 0;
}
