#include <stdio.h>
#include <string.h>

/**
 * Hàm kiểm tra chuỗi có đối xứng không
 * @param str chuỗi
 * @param start bắt đầu của chuỗi
 * @param end kết thúc của chuỗi
 * @return
 */
int isPalindrome(char str[],int start, int end){
    if(start >= end){
        return 1;
    }

    if (str[start] != str[end]){
        return 0;
    }

    return start + isPalindrome(str, start + 1, end -1);
}
int main(){
    char str[100];
    // Nhập chuỗi
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    // Xóa ký tự xuống dòng
    size_t len = strlen(str);
    if (str[len -1 ] == '\n'){
        str[len -1 ] = '\0';
    }
    // In kết quả
    if(isPalindrome(str, 0, strlen(str) - 1)){
        printf("Palindrome valid");
    }else{
        printf("Palindrome invalid");
    }
    return 0;
}