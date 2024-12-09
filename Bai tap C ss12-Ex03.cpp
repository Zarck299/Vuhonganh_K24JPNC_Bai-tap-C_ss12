#include <stdio.h>

long long tinhGiaiThua(int n) {
    long long giaiThua = 1; 
    if (n < 0) {
        printf("Giai thua khong ton tai voi so am.\n");
        return -1;
    }
    for (int i = 1; i <= n; i++) {
        giaiThua *= i;
    }
    return giaiThua;
}
int main() {
    int number;
    long long result;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);
    result = tinhGiaiThua(number);
    if (result != -1) {
        printf("Giai thua cua %d la: %lld\n", number, result);
    }
    return 0;
}
