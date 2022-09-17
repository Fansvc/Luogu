#include<stdio.h>
int main(){
	int k,j,z,max=0;
	scanf("%d",&k);
	int a[k];
	for(int i=0;i<k;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<k;i++){
		for(j=0;j<k-i;j++){
		if(a[j]>a[j+1]){
			z=a[j];
			a[j]=a[j+1];
			a[j+1]=z;
		}	
		}
	}
	for(int i=0;i<k-1;i++){
		if(a[i+1]-a[i]>max) max=a[i+1]-a[i];
	}
	printf("%d",max);
	return 0;
}
