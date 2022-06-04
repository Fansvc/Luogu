#include <stdio.h>

int main() {
	int i;
	int m, n;
	int a, b;
	scanf("%d %d", &m, &n);
	for(i = 1; i <= n * m; ++i) {
		if(n % i == 0 && m % i == 0)
			a = i;
		if(i % n == 0 && i % m == 0) {
			b = i;
			break;
		}
	}
	printf("%d %d\n", a, b);
	return 0;
}
