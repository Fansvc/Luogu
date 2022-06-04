#include <stdio.h>  

int main(){
	int N;
	scanf("%d",&N);
	int a[N];
	int i=0;
	int num;
	for(i;i<N;i++){
		a[i]=0;
	}
	for(i=0;i<N;i++){
		scanf("%d",&num);
		a[num]++;
	}
	
	int max=0;
	for(i=0;i<N;i++){
		if(a[i]>=a[max]) {
		max=i;}
		else {
		max=max;}
	}
	printf("%d %d",max,a[max]);
  return 0;
}


