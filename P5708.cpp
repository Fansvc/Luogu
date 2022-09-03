#include <stdio.h>
#include <math.h>
int main(){
	double a,b,c,p;
	scanf("%lf %lf %lf",&a,&b,&c);
	p=0.5*(a+b+c);
	printf("%.1f",pow(p*(p-a)*(p-b)*(p-c),0.5));
}
