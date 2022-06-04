#include <stdio.h>
int main()
{
	int n;
	int max=0;
	scanf("%d",&n);
	int num[n];
	int i=0,j=0,k=0;
	for(i;i<n;i++){
		scanf("%d",&num[i]);
	}
	for(j;j<n;j++){
		if(num[max]<num[j]){
			max=j;
		}
		else max=max;
	}
	printf("%d %d",num[max],max);
	return 0;	
}
