#include<stdio.h>
int main(){
	int a[13]={0};
	for(int i=1;i<13;i++){
		scanf("%d",&a[i]);
	}

	int cnt=0,isPrime=0;
	int sum=0;
	for(int i=1;i<13;i++){
		sum+=300;
		sum-=a[i];
		if(sum<0){
			printf("-%d",i);
			isPrime=1;
			break;
		}
		
		else{
			while(sum>=100){
				cnt++;
				sum-=100;
			}
		}
		
	}
	if(isPrime==0) printf("%d",cnt*120+sum);
}
