#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main(void)
{
	int n, f, count = 0;
	scanf("%d", &n);
	scanf("%d", &f);

	n = n / 100 * 100;
	while (n % f != 0) {
		if (n % f != 0) {
			n++;
			count++;
		}
	}
	if (count >= 10)
		printf("%d", count);
	else
		printf("0%d", count);
}