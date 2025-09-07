#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main(void)
{
	int n;
	char a[51];
	scanf("%d", &n);
	scanf("%50s", a);
	int len = (int)strlen(a);


		for (int i = 1; i < n; i++) {
			char b[51];
			scanf("%50s", b);
			for (int j = 0; j < len; j++) {
				if (a[j] != b[j])
					a[j] = '?';
			}
		}
	
	printf("%s\n", a);
}