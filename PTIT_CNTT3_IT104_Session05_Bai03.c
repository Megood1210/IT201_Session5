
#include <stdio.h>

/**
 * Hàm tính tích từ 1 đến n
 * @param n Số giới hạn
 */
int factorial(int n){
    // Điều kiện để dừng
    if(n == 1){
        return 1;
    }
    return n * factorial(n - 1);
}

int main(){
    int n, result;

    printf("Nhap so bat ki: ");
    scanf("%d", &n);
    if(n < 0){
        printf("Khong hop le");
    }
    result = factorial(n);
    printf("%d", result);

    return 0;
}
