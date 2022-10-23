#include<stdio.h>
int f[100001];
int main(){
	int a,b,c,d;
	scanf("%d %d %d",&a,&b,&c);
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			for(int k=1;k<=c;k++){
				f[i+j+k]++;
			}
		}
	}
	int max=0;
	for(int i=1;i<100001;i++){
		if(f[i]>max){
			max=f[i];
			d=i;
		}
	}
	printf("%d",d);
}
