#include<stdio.h>
#define MAXSIZE 100
int DigitNum(char *str);
void main()
{
char str[100];
printf("\n 请输入一串含有数字与字母的字符串: \n");
gets(str);
printf("\n 该字符串中含有的数字个数为: %d \n", DigitNum(str));
}
int DigitNum(char *str)
{
int i,dn=0;
for(i=0;str[i]!='\0';i++)
{
if(str[i]>='0' && str[i]<='9') dn++;
}
return dn;
}
