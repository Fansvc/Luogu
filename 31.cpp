#include<stdio.h>
int main(){
	int n,i,j,k;
	 scanf("%d",&n);
	 char a[n];
	 for(i=0;i<n;i++){
	 	scanf("%d",&a[i]);
	 }
	 for(j=0;j<n;j++){
	 	for(i=0;i<=n-1;i++){
	 		if(a[i]>a[i+1]){
	 			k=a[i+1];
	 			a[i+1]=a[i];
	 			a[i]=k;
			 }
		 }
	 }
	 for(i=n;i!=0;i--){
	 	if(i==0){
	 		printf("%d",a[i]); 
	 		break;
		 }
	 	printf("%d ",a[i]); 
	 }
	return 0;
} 
