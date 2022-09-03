#include<stdio.h>
int main(){
	int L;
	//scanf("%d",&L);
	int isPrime=0;
	int cnt=0;
	int a[100000]={0};
	for(int i=2;i<100000;i++){
		isPrime=0;
		for(int j=2;j<i;j++){
			if(i%j==0&&i!=2){
				isPrime=1;
				break;
			}
		}
		if(isPrime==0){
			a[cnt]=i;
			cnt++;
		}
	}
	for(int i=0;i<100;i++){
		printf("%d\n",&a[i]);
	}	
	return 0;
} 
