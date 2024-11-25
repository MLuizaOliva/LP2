#include <stdio.h>
#include <stdlib.h>

int mdc(int x, int y) {
    if (x == y) {
        return x;
    } else if (x > y) {
        return mdc(x - y, y);
    } else {
        return mdc(x, y - x);
    }
}

int main() {
    int x;
    int y;

    printf("x:\n");
    scanf("%d", &x);
    printf("y:\n");
    scanf("%d", &y);

    printf("MDC(%d, %d) = %d\n", x, y, mdc(x, y));

    return 0;
}