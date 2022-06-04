#include <stdio.h>
int main(){
	int n,i,cnt;
	int max=0;
	int a[1000];
	int b[10]={0};
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++){
		while(a[i]!=0){
			int cnt=a[i]%10;
			b[cnt]++;
			a[i]/=10;
		}
	}
	for(i=0;i<10;i++){
		if(max<=b[i]) max=b[i];
	}
	printf("%d:",max);
	for(i=0;i<10;i++){
		if(b[i]==max) printf(" %d",i);
	}
	return 0;
} 
