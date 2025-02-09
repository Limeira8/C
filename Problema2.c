#include <stdio.h>

void piramide(int h) {
    for (int i = 1; i <= h; i++) {
        int e = h - i;
        int a = (i - 1) * 2 + 1;
        
        for (int j = 0; j < e; j++) {
            printf(".");
        }
        
        printf("*");
        
        for (int j = 0; j < a - 2; j++) {
            printf("-");
        }
        
        if (i > 1) {
            printf("*");
        }
        
        for (int j = 0; j < e; j++) {
            printf(".");
        }
        
        printf("\n");
    }
}

int main() {
    int h;

    scanf("%d", &h);

    piramide(h);

    return 0;
}