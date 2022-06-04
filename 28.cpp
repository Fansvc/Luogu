#include <stdio.h>
int main(){
	char c;
	int re=0,t,flag=0;
	scanf("%d%c",&re,&c);
	while(c!='='&&flag==0){
		switch(c){
			case '+':scanf("%d",&t);re+=t;break;
			case '*':scanf("%d",&t);re*=t;break;
			case '-':scanf("%d",&t);re-=t;break;
			case '/':scanf("%d",&t);
					if(t==0){flag=1;break;}
					re/=t;break;
			default:flag=1;break;
		}
		scanf("%c",&c);
	}
	if(flag==1)printf("ERROR");
	else printf("%d",re);
	return 0;
}
