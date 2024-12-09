#include <stdio.h>
#include <stdbool.h>
bool checkPerfectcount(int n) {
    if (n <= 0) {
        return false; 
    }
    int tongUoc = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            tongUoc += i;
        }
    }
    return tongUoc == n;
}
int main() {
    int firstNumber, secondNumber;
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &firstNumber);

    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &secondNumber);
    if (checkPerfectcount(firstNumber)) {
        printf("%d la so hoan hao.\n", firstNumber);
    } else {
        printf("%d khong phai la so hoan hao.\n", firstNumber);
    }
    if (checkPerfectcount(secondNumber)) {
        printf("%d la so hoan hao.\n", secondNumber);
    } else {
        printf("%d khong phai la so hoan hao.\n", secondNumber);
    }

    return 0;
}

