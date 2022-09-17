#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	double max=0.0,min=10.0,sum=0.0;
	double a[n];
	for(int i=0;i<n;i++){
		scanf("%lf",&a[i]);
		sum+=a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]>max) max=a[i];
		if(a[i]<min) min=a[i];
	}
	sum=sum-max-min;
	printf("%.2f",sum/(n-2.0));
}
