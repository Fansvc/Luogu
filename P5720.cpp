#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int day=1;
	while(a!=1){
		a/=2;
		day++;
	}
	printf("%d",day);
	return 0;
}
