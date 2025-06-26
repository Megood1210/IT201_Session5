#include <stdio.h>

/**
 * Hàm in ra các số từ 1 đến n
 * @param currentNumber Số hiện tại bằng 0
 * @param n Số giới hạn
 */
int printNumbers(int currentNumber, int n){
    // Điều kiện để dừng
    if(currentNumber > n){
        return;
    }
    printf("%d ", currentNumber);
    // Gọi lại chính nó
    printNumbers(currentNumber + 1, n);
}

int main(){
    int n;

    printf("Nhap so bat ki: ");
    scanf("%d", &n);

    printNumbers(1, n);
    return 0;
}