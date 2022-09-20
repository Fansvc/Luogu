#include<stdio.h>
int main(){
	int n,z=0;
	scanf("%d",&n);
	int a[n],b[n];
	for(int i=0;i<n;i++){
	   scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		int cnt=0;
		for(int j=0;j<i;j++){
			if(a[j]<a[i]){
				cnt++;
			}
		}
		
		b[z]=cnt;
		z++;
	}
	for(int i=0;i<z;i++){
		printf("%d ",b[i]);
	}
}
