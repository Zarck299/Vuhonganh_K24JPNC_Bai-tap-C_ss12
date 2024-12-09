#include <stdio.h>
int timSoLonNhat(int array[], int size) {
    int max = array[0]; 
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    return max;
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
    int max = timSoLonNhat(mang, n);
    printf("So lon nhat trong mang la: %d\n", max);

    return 0;
}

