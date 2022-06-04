#include <stdio.h>
int main(){
	int n ;
	int i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int min=0;
	for(i=0;i<n;i++){
		if(a[min]<=a[i]){
			min=min;
		}else{
			min=i;
		}
	}
	printf("min = %d",a[min]);
	return 0;
}
