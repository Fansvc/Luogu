#include<stdio.h>
int main(){
	int l,m;
	scanf("%d %d",&l,&m);
	int a[100001];
	for(int i=0;i<=l;i++){
		a[i]=0; 
	}
	for(int j=0;j<m;j++){
		int u,v;
		scanf("%d %d",&u,&v);
		for(u;u<=v;u++){
			a[u]=1;
		}
	}
	int cnt=0;
	for(int i=0;i<=l;i++){
		if(a[i]==0) cnt++;
	}
	printf("%d",cnt);
}
