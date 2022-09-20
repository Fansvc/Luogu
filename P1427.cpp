#include<stdio.h>
int main(){
	int a[100];
	int cnt=0;
	for(int i=0;i>-1;i++){
		scanf("%d",&a[i]);
		if(a[i]==0){
			break;
		}
		else{
			cnt++;
		}
	}
	for(int i=cnt-1;i>=0;i--){
		printf("%d ",a[i]);
	}
}
