#include<stdio.h>
int main(){
	int n,cnt=1;
	scanf("%d",&n);
	int a[1000]={n};
	int N=n;
	while(n!=1){
		if(n%2==0){
			n/=2;
			a[cnt]=n;
			cnt++;
		}
		else{
			n=n*3+1;
			a[cnt]=n;
			cnt++;
		}
	}
	cnt--;
	for(int i=cnt;i!=-1;i--){
		printf("%d ",a[i]);
	}
}
