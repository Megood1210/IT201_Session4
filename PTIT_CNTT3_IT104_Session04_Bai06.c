#include <stdio.h>
#include <string.h>
// Khai báo cấu trúc Student
struct Student{
    int id;
    char name[100];
    int age;
};

int main(){
    int n = 5; //số sinh viên
    struct Student students[5];

    // Nhập thông tin cho từng sinh viên
    printf("Nhap thong tin cho %d sinh vien: \n", n);
    for(int i = 0; i < n; i++){
        printf("Sinh vien thu %d: \n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);

        // Xóa bộ nhớ đệm để tránh lỗi khi nhập chuỗi
        while(getchar() != '\n');
        printf("Ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        // Xóa ký tự xuống dòng
        size_t len = strlen(students[i].name);
        if(students[i].name[len-1] == '\n'){
            students[i].name[len-1] = '\0';
        }
        printf("Tuoi: ");
        scanf("%d", &students[i].age);
    }
    // Nhập ID cần tìm
    int searchId;
    printf("Nhap ID de tim sinh vien: \n");
    scanf("%d", &searchId);
    // Tìm kiếm và in kết quả
    int found = 0;
    for(int i = 0; i < n; i++){
        if(students[i].id == searchId){
            printf("Thong tin sinh vien co ID thu %D: \n", searchId);
            printf("ID: %d\n", students[i].id);
            printf("Ten: %s\n", students[i].name);
            printf("Tuoi: %d\n", students[i].age);
            found = 1;
            break;
        }
    }

    if(!found){
        printf("Sinh vien khong ton tai");
    }
    return 0;
}