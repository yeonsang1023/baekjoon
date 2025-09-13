#include <stdio.h>

int main(void) {
    int a, b, c;
    if (scanf("%d %d %d", &a, &b, &c) != 3) return 0;

    int x = a, y = b, z = c;
    if (x > y) { int t = x; x = y; y = t; }
    if (y > z) { int t = y; y = z; z = t; }
    if (x > y) { int t = x; x = y; y = t; }

    int ans;
    if (x + y > z) ans = x + y + z;
    else           ans = 2 * (x + y) - 1;

    printf("%d\n", ans);
    return 0;
}