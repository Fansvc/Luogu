#include<stdio.h>
int main(){
	int n,max=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int cnt=1;
	for(int i=0;i<n;i++){
		if(a[i]+1==a[i+1]){
			cnt++;
		}
		else{
			if(cnt>max){
				max=cnt;
			}
			cnt=1;
		}
	}
	printf("%d",max);
}
