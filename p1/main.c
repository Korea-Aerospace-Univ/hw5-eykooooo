#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N, a, b, c;
	bool found = false;

	scanf("%d", &N);

	for (a = 1; a <= N / 900; a++) {
		for (b = 2; b <= N / 750; b+=2) {
			for (c = 1; c <= N / 200; c++) {

				if (a * 900 + b * 750 + c * 200 == N) {
					if (c < a || c < b) {
						printf("%d %d %d\n", a, b, c);
						found = true;
					}
				}
			}
		}
	}

	if (!found) {
		printf("none");
	}

	return 0;
}
	return 0;
}
