#include<stdio.h>
int main(){
	double s,sum=0.0,j=2.0;
	int cnt=0;
	scanf("%lf",&s);
	while(s>sum){
		sum+=j;
		j*=0.98;
		cnt++;
	}
	printf("%d",cnt);
}
