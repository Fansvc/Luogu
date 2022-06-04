#include <stdio.h>

int DigitNum(char *str);
void main(){
	char str[100];
	printf("输入一串含有数字与字母的字符串\n");
	gets(str);
    printf("\n数字一共有%d个\n",DigitNum(str));
}
int DigitNum(char *str){
		int i,dn=0;
		for(i=0;str[i]!='\0';i++)
		{
			if(str[i]>='0'&&str[i]<='9'){
				dn++;
			}
		}
		return dn;
	} 
