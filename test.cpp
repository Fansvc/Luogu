#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(int j=0;j<n;j++){
		int flag=0;
		for(int z=2;z<a[j];z++){
			if(a[j]%z==0){
				flag++;
			}
		}
		if(flag==1) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
