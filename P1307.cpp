#include<stdio.h>
int main(){
	int N,result=0;
	scanf("%d",&N);
	int i=N;
	while(N!=0){
		i=N%10;
		result=result*10+i;
		N/=10;
	}
	printf("%d",result);
}
