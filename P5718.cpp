#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int min=0;
	for(int i=0;i<n;i++){
		if(a[min]<=a[i]){
			min=min;
		}
		else{
			min=i;
		}
	}
	printf("%d",a[min]);
	return 0;
}
