//2+22+222+2222бнбн 
#include <stdio.h>
int main(){
	int a,n;
	scanf("%d %d",&a,&n);
	
	int sum=0;
	int i;
	int t=0;
	//0*10+2 1*10+2 2*10+2
	for(i=0;i<n;i++){
		t=t*10+a;
		sum+=t;
	}
	printf("%d\n",sum);
	return 0;
} 
