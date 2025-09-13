#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int n, m, tmp, s, k;
	int a[101] = { 0 };
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		a[i] = i;
	}
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &s, &k);
		tmp = a[s];
		a[s] = a[k];
		a[k] = tmp;
	}
	for (int i = 1; i <= n; i++)
		printf("%d ", a[i]);
}
