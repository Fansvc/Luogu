#include<stdio.h>
int fact(int j);
int main(){
	int n,max=1,z=0;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		if(n%i==0){
			z=fact(i);
			if(z>max){
				max=z;
			}
		}
	}
	printf("%d",max);
	return 0;
}

int fact(int j){
	for(int i=2;i<j;i++){
		if(j%i==0&&j!=2){
			return 0;
			break;
		}
		else{
			continue;;
		}
		return j;
	}
}
