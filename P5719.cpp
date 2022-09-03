#include<stdio.h>
int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	double sum1=0.0;
	double cot1=0.0;
	double sum2=0.0;
	double cot2=0.0;
	for(int i=1;i<=n;i++){
		if(i%k==0) {
		sum1+=i;
		cot1++;}
		else {
		sum2+=i;
		cot2++; 
	}
}
	printf("%.1f %.1f",sum1/cot1,sum2/cot2);
}
