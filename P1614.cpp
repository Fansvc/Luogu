#include<stdio.h>
int main(){
	int n,m,sum=0;
	scanf("%d%d",&n,&m);
	int a[100001];
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int min=10000000;
	for(int i=1;i<=n-m+1;i++){ 
		for(int j=1;j<=m;j++){
			sum+=a[i+j-1];
		}
		if(sum<=min){
			min=sum;
		}
		sum=0;
	}
	printf("%d",min);
	return 0;
}
