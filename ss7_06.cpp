#include <stdio.h>

int main() {
    int mang[5] = {1, 2, 3, 4, 5};

    printf("Mang ban dau:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    for (int i = 0; i < 5; i++) {
        if (mang[i] % 2 == 0) {
            mang[i] += 3;
        } else {
            mang[i] += 2;
        }
    }

    printf("Mang sau khi thay doi:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}

