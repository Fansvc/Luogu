#include<stdio.h>
int main(){
	int n,N;
	scanf("%d",&n);
	N=n/364;
	int x,k;
	for(k=1;k>0;k++){
		x=N-3*k;
		if(1<=x&&x<=100){
			printf("%d\n%d",x,k);
			break;
		}	
	}
	return 0;
}
