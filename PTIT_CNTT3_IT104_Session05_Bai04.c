

#include <stdio.h>

/**
 * Hàm tính tổng từ n đến m
 * @param m Số giới hạn
 */
int sumNumbers(int firstNum, int secondNum){
    // Điều kiện để dừng
    if(firstNum > secondNum){
        return 0;
    }
    return firstNum + sumNumbers(firstNum + 1, secondNum);
}

int main(){
    int firstNum, secondNum;
    //Nhập 2 số
    printf("Nhap so thu nhat: ");
    scanf("%d", &firstNum);
    printf("Nhap so thu hai: ");
    scanf("%d", &secondNum);
    // Kiểm tra điều kiện
    if(firstNum < 0)
    {
        printf("Khong hop le");
        return 0;
    }
    // In kết quả
    int result = sumNumbers(firstNum,secondNum);
    printf("%d", result);

    return 0;
}
