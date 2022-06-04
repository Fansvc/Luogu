#include <stdio.h>
int n,i,x;
int a[20];
int main(){
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	scanf("%d",&a[i]);
	scanf("%d",&x); 
 	for(i = n - 1; i >= 0; i--){
 		if(x <= a[i]){
		 	a[i + 1]=a[i];
		 	a[i] = x;
		 } 
	}
	if(x > a[n - 1]) a[n] = x;
	for(i = 0; i < n + 1; i++)
	printf("%d ",a[i]);
	return 0;
}
