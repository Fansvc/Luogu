#include <stdio.h>
int main()
{
	double sum=0.0;
	int x;
	int i;
	scanf("%d",&x);
	for(i=1;i<=x;i++){
		sum+=1.0/i;
	}
	printf("f(%d)=%f\n",x,sum);
	return 0; 
 } 
