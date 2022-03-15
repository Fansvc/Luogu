// 水仙花数就是 n位数的各个位上的数的n次方之和等于这个数 
#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	n=3;//  取三位数就是从100-999 
	int first=1;
	int i=1;
	while(i<n){
		first*=10;
		i++;
	}
	//printf("first=%d\n",first);
	//遍历循环100-999 
	i=first;
	while(i<first*10){
		int t=i;
		int sum=0; 
		do{
			int d=t%10;
			t/=10;
			int p=1;
			int j=0;
			while(j<n){
				p*=d;
				j++;
			}
			sum+=p;
		}while(t>0);
		if(sum==i){
		  printf("%d\n",i);	
		}
		i++;
	}
	return 0;
}
