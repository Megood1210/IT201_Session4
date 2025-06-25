#include <stdio.h>
#include <stdlib.h>
// Hàm hoán đổi để phần tử trong mảng có thể sắp xếp theo đúng thứ tự
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Hàm sắp xếp mảng tăng dần
void sort(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}
int binarySearch(int arr[], int n, int x){
    int left = 0, right = n-1;
    while(left <= right){
        int mid = left + (right - left)/2;
        if(arr[mid] == x){
            return mid;
        }else if(arr[mid] < x){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n;
    // Nhập sô lượng phần tử trong mảng
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

    sort(arr, n);
    //Nhập số cần kiểm tra
    int x;
    printf("Nhap so can tim: ");
    scanf("%d", &x);
    // Tìm kiếm nhị phân
    int index = binarySearch(arr, n, x);
    if(index != -1){
        printf("Phan tu co trong mang");
    }else{
        printf("Phan tu khong co trong mang");
    }
    free(arr);
    return 0;
}