#include <stdio.h>

int main() {
    int a, b, c, chang;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) { chang = a; a = b; b = chang; }
    if (a > c) { chang = a; a = c; c = chang; }
    if (b > c) { chang = b; b = c; c = chang; }

    printf("%d %d %d\n", a, b, c);
    return 0;
}
