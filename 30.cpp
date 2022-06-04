#include <stdio.h>
int main(){
	int a[20];
	int N,X,i;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&X);
	for(i=N-1;i>=0;i--){
		if(X<=a[i]){
			a[i+1]=a[i];
			a[i]=X;
		}
	}
	if(X>a[N-1]) a[N]=X;
	for(i=0;i<N+1;i++){
		printf("%d ",a[i]);
	}
	return 0;
} 
