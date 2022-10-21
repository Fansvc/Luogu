#include<stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	int a[N][N];
	for(int z=0;z<N;z++){
		for(int x=0;x<N;x++){
			a[z][x]=0;
		}
	}
	a[0][N/2]=1;
	int i=0,j=N/2;
	for(int K=2;K<=N*N;K++){
		if(i==0&&j!=N-1){
			a[N-1][j+1]=K;
			i=N-1;
			j=j+1;
		}
		else if(i!=0&&j==N-1){
			a[i-1][0]=K;
			i=i-1;
			j=0;
		}
		else if(i==0&&j==N-1){
			a[i+1][j]=K;
			i=i+1;
		}
		else{
			if(a[i-1][j+1]==0){
				a[i-1][j+1]=K;
				i=i-1;
				j=j+1;
			}
			else{
				a[i+1][j]=K;
				i=i+1;
			}
		}
	}
	for(int z=0;z<N;z++){
		for(int x=0;x<N;x++){
			printf("%d ",a[z][x]);
		}
		printf("\n");
	}
}
