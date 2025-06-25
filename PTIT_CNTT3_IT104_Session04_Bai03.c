#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    // Nhập sô lượng phần tử trong mảng
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    // Cấp phát
    int *array = (int *)malloc(n*sizeof(int));
    // Kiểm tra cấp phát
    if(array == NULL){
        printf("Khong the tao mang");
        exit(1);
    }
    //Nhập từng phần tử vào mảng
    for(int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &array[i]);
    }
    // Tìm min
    int min = array[0];
    int found = 0; // found để gán vị trí của min vào nó
    for(int i = 1; i < n; i++){
        if(array[i] < min){
            min = array[i];
            found = i;
        }
    }
    // In kết quả
    printf("%d", found);
    free(array);

    return 0;
}