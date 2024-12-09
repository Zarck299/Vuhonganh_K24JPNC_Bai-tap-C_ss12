#include <stdio.h>

void inMang(int array[], int size) {
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int mang[100], n;

    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }

    inMang(mang, n);

    return 0;
}

