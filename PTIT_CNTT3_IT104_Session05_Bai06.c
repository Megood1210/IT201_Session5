#include <stdio.h>


/**
 * Hàm tính tổng các phần tử trong mảng
 * @param arr Mang
 * @param n Số phần tử
 * @return
 */
int sumString(int arr[], int n){
    if(n == 0){
        return 0;
    }
    return arr[n - 1] + sumString(arr, n - 1); // Tổng phần tử cuối + phần còn lại
}
int main(){
    int n;
    // Nhập số phần tử
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    int arr[n];
    // Nhập các phần tử
    for (int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    //Gọi hàm tính tổng
    int sum = sumString(arr, n);
    // In kết quả
    printf("%d", sum);
    return 0;
}