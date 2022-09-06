#include<stdio.h>
#include<math.h>

int main(){
	int a[100000]={2};
	int cnt=1;
	for(int i=3;i<100000;i++){
			int isPrime=1;
		for(int j=2;j<i;j++){
			if(i%j==0){
				isPrime=0;
				break;
			}
		}
		if(isPrime==1) {
			a[cnt]=i;
			cnt++;
		}
	}
	
	int L;
	int sum=0;
	cnt=0;
	scanf("%d",&L);
	for(int i=0;sum<L;i++){
		sum+=a[i];
		printf("%d\n",a[i]);
		cnt++;
	}
	printf("%d",cnt);
	return 0;
}
