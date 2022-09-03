#include<stdio.h>
int main(){
	int k,n,i;
	scanf("%d",&k);
	double sum=0.0;
	for(n=1;;n++){
		sum=sum+1.0/n;
		if(sum>k){
			break;
		}
	}
	printf("%d",n);
	return 0;
}
