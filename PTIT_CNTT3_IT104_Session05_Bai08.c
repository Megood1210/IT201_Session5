#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * Hàm chuyển chuỗi ký tự số thành số nguyên
 * @param str chuỗi ký tự số
 * @return
 */
int change(const char str[]){
    int result = 0;
    int i = 0;
    // Kiểm tra dấu âm
    int isNegative = 0;
    if(str[0] == '-'){
        isNegative = 1;
        i++;
    }
    // Kiểm tra xem có ký tự không phải số trong mảng không
    for(; str[i] != 0; i++){
        if (!isdigit(str[i])){
            printf("Input khong hop le\n");
            return 0;
        }
        result = result * 10 + (str[i] - '0');
    }
    return isNegative ? -result : result;
}

int main(){
    char str[100];
    // Nhập chuỗi
    printf("Nhap chuoi ky tu so: ");
    fgets(str, sizeof(str), stdin);
    // Xóa ký tự xuống dòng
    size_t len = strlen(str);
    if(str[len -1 ] == '\n'){
        str[len -1 ] = '\0';
    }
    // Gọi hàm đổi
    int number = change(str);
    // In kết quả
    if(number == 0 && str[0] != '0'){

    }else{
        printf("%d", number);
    }
    return 0;
}