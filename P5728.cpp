#include<stdio.h>
int main(){
	int N,j;
	scanf("%d",&N);
	int c[1001],m[1001],e[1001],sum[1001];
	for(int i=1;i<=N;i++){
		scanf("%d %d %d",&c[i],&m[i],&e[i]);
		sum[i]=e[i]+m[i]+c[i];
	}
	int cnt=0;
	for(int i=1;i<N;i++){
		j=i+1;
		for(j;j<=N;j++){
			if(c[i]-5<=c[j]&&c[j]<=c[i]+5){
				if(m[i]-5<=m[j]&&m[j]<=m[i]+5){
					if(e[i]-5<=e[j]&&e[j]<=e[i]+5){
						if(sum[i]-10<=sum[j]&&sum[j]<=sum[i]+10){
							cnt++;
						}
					}
				}
			}
		}
	}
	printf("%d",cnt);
}
