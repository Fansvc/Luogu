#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int c[7];
	for(int i=0;i<7;i++){
		scanf("%d",&c[i]);
	}
	int a[7]={0,0,0,0,0,0,0};
	for(int i=0;i<n;i++){
		int b[7];
		int cnt=0;
		for(int j=0;j<7;j++){
			scanf("%d",&b[j]);
			if(b[j]==c[0]) cnt++;
			if(b[j]==c[1]) cnt++;
			if(b[j]==c[2]) cnt++;
			if(b[j]==c[3]) cnt++;
			if(b[j]==c[4]) cnt++;
			if(b[j]==c[5]) cnt++;
			if(b[j]==c[6]) cnt++;
		}
		a[7-cnt]++;
	}
	for(int i=0;i<7;i++){
		printf("%d ",a[i]);
	}
}
