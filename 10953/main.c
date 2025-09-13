#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, s[100], k[100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d,%d", &s[i], &k[i]);
	}
	for (int i = 0; i < n; i++) {
		printf("%d\n", s[i] + k[i]);
	}

}