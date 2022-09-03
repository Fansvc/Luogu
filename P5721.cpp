#include<stdio.h>
int main(){
	int n;
	int i,j=0;
	int cnt;
	scanf("%d",&n);
	for(cnt=n;cnt!=0;cnt--){
		for(i=1;i<=cnt;i++){
			j++;
			printf("%02d",j); 
		}
		printf("\n");
	}
	return 0;
}
