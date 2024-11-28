#include <stdio.h>

int main() {
    int mang[] = {1, 2, 3, 4, 5};
    int doDai = sizeof(mang) / sizeof(mang[0]);

    printf("Cac phan tu trong mang:\n");
    for (int i = 0; i < doDai; i++) {
        printf("Phan tu thu %d: %d\n", i + 1, mang[i]);
    }

    printf("Do dai cua mang: %d\n", doDai);

    return 0;
}

