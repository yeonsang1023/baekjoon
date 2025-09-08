#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int n, i, a=1;
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		a = a * i;

	printf("%d", a);
}