#include<stdio.h>
factorsum(int number){
	int sum=0;
	for(int i=1;i<number;i++){
		if(number%i==0){
			sum+=i;
		}
	}
	if(sum==number){
		return sum;
	}
}


void PrintPN(int m,int n){
	int i,j;
	int flag=0;
	for(i=m;i<=n;i++){
		if(factorsum(i)==i){
			printf("%d=1",i);
			for(j=2;j<i;j++){
				if(i%j==0){
					printf("+%d",j);
				}
			}
			printf("\n");
			flag=1;
		}
	}
	if(flag==0){
		printf("No perfect number");
	}
}

int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	if(factorsum(m)==m) printf("%d is a perfect number\n",m);
	if(factorsum(n)==n) printf("%d is a perfect number\n",n);
	 PrintPN(m,n);
	
	return 0;
}










