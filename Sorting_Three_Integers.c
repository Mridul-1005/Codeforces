#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a < b) {
        if (b < c) {
            // a < b < c
            printf("%d %d %d\n", a, b, c);
        } else if (a < c) {
            // a < c < b
            printf("%d %d %d\n", a, c, b);
        } else {
            // c < a < b
            printf("%d %d %d\n", c, a, b);
        }
    } else {
        if (c < b) {
            // c < b < a
            printf("%d %d %d\n", c, b, a);
        } else if (c < a) {
            // b < c < a
            printf("%d %d %d\n", b, c, a);
        } else {
            // b < a < c
            printf("%d %d %d\n", b, a, c);
        }
    }

}
