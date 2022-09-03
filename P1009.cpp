#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int cnt,i,j;
	int s=1;
	int S=0;
	j=n;
	for(cnt=0;cnt<j;cnt++){
		s=1;
		for(i=1;i<=n;i++){
			s*=i;
		}
		S+=s;
		n--;	
	}
	printf("%d",S);
	return 0;
}
