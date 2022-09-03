#include<stdio.h>
int main(){
	int n,x;
	scanf("%d %d",&n,&x);
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(i==x) cnt++;
		if(i>9){
		if(i/10==x) cnt++;
		if(i%10==x) cnt++;
	}}
	printf("%d",cnt);
}
