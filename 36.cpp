#include<stdio.h>
int main () {
	int i,n,j,a[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	int count[n];
	for(i=0;i<n;i++) {
		count[i]=0;
	}
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if(a[i]==a[j])
				count[i]++; 
		}
	}
	int max=0;
	for(i=1;i<n;i++) {
		if(count[i]>count[max])
			max=i;
		
	}
	printf("%d %d",a[max],count[max]);
	return 0;
}

