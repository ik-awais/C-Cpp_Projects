#include <stdio.h>

int main() {
    int num, rev = 0;

    printf("Enter a number < 256: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("0\n");
        return 0;
    }

    while (num > 0) {
        rev = rev * 10 + (num % 2);
        num /= 2;
    }

    printf("%d\n", rev);
    return 0;
}
