#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a[26];
    char c[101];

    for (int i = 0; i < 26; i++) a[i] = -1;

    if (scanf("%100s", c) != 1) return 0;  

    for (int i = 0; c[i]; i++) {
        if ('a' <= c[i] && c[i] <= 'z') {  
            int b = c[i] - 'a';
            if (a[b] == -1) a[b] = i;     
        }
    }

    for (int i = 0; i < 26; i++) {
        if (i) putchar(' ');
        printf("%d", a[i]);
    }
    putchar('\n');                        
    return 0;
}