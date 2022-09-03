#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int a[5]={0};
	int i,j;
	int max=1;
	int sum,sum1;
	for(i=1;i<4;i++){
	scanf("%d",&a[i]);	
	}
	for(i=1;i<4;i++){
		if(a[max]>=a[i]){max=max;}
		else{max=i;}
	}
	sum=a[1]+a[2]+a[3];
	sum1=pow(a[1],2)+pow(a[2],2)+pow(a[3],2);
	if(sum<max*2){
		printf("Not triangle\n");
	}
	else{
		if(sum1==2*pow(max,2)) printf("Right triangle\n");
		if(sum1>2*pow(max,2)) printf("Acute triangle\n");
		if(sum1<2*pow(max,2)) printf("Obtuse triangle");
		if(a[1]==a[2]||a[1]==a[3]||a[2]==a[3]) printf("Isosceles triangle\n");
		if(a[1]==a[2]&&a[1]==a[3]&&a[2]==a[3]) printf("Equilateral triangle\n");
	}
	return 0;
}
