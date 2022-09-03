#include<stdio.h>
int main(){
	int a,b,c,d,e,f,sum,i,j;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	i=a*60+b;
	j=c*60+d;
	sum=j-i;
	e=sum/60;
	f=sum%60;
	printf("%d %d",e,f);
}
