#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int n, m;
	int a[101] = { 0 };
	int s, j, k;
	scanf("%d %d", &n,&m);
	for (int i = 0; i < m; i++) {
		scanf("%d %d %d", &s, &j, &k);
		for (int i = s; i <= j; i++) {
			a[i] = k;
		}
	}
	for (int i = 1; i <= n; i++) {
		printf("%d ", a[i]);
	}
}