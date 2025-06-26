#include <stdio.h>

/**
 * Hàm tính tích từ 1 đến n
 * @param currentNumber Số hiện tại bằng 0
 * @param n Số giới hạn
 */
int sumNumbers(int n){
    // Điều kiện để dừng
    if(n == 0){
        return;
    }
    return n + sumNumbers(n - 1);
}

int main(){
    int n, result;

    printf("Nhap so bat ki: ");
    scanf("%d", &n);
    result = sumNumbers(n);
    printf("%d", result);

    return 0;
}
