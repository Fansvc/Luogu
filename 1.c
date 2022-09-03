#include <stdio.h>

int factorsum(int n);
void printPN(int n,int m);
int a[10005];

int main() {
	int n,m;
	scanf("%d%d",&n,&m);
	for (int i = n; i <= m; i++) {
		if (factorsum(i)) {
			a[i]++;
		}
	}
	printPN(n,m);	
	return 0;
}

int factorsum(int n) {
	int sum = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			sum += i;
		}
	}
	return sum == n;
}

void printPN(int n,int m) {
	int f = 1;
	for (int i = n; i <= m; i++) {
		if (a[i]) {
			printf("%d is a perfect number\n",i);
			printf("%d=",i);
			for (int j = 1; j < i; j++) {
				if (i % j == 0) {
					if (j == 1) {
						printf("%d",j);
					}
					else {
						printf("+%d",j);
					}
				}
			}
			printf("\n");
			f = 0;
		}
	}
	if (f) printf("No perfect number");
}
