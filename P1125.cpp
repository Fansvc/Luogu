#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	int b[27]={0};
	scanf("%s",&a);
	for(int i=0;i<strlen(a);i++){
		b[a[i]-'a']++;
	}
	int maxn=0,minn=100;
	for(int i=1;i<27;i++){
		if(b[i]>maxn) maxn=b[i];
		if(b[i]>0&&b[i]<minn) minn=b[i];
	}
	int cnt;
	cnt=maxn-minn;
	
	int isPrime=0;
	if(cnt==0||cnt==1) isPrime=1;
	for(int j=2;j<cnt;j++){
		if(cnt%j==0&&cnt!=2){
			isPrime=1;
			break;
		}
	} 
	
	
	if(isPrime==1){
		printf("No Answer\n");
		printf("0");
	}
	if(isPrime==0){
		printf("Lucky Word\n");
		printf("%d",cnt);
	} 
	

	return 0;
}
