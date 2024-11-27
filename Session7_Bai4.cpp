#include <stdio.h>

int main() {
    int n;
    int mang[100];
    
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }
    printf("\nCac phan tu cua mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}

