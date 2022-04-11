#include <stdio.h>
int main()
{
    char str[20];
    int i,j,sum=0,x=1;
    scanf("%s",str);
    for(i=0; i<11; i++)//11位和12位分别为-和识别码 不需要计算
    {
        if(str[i]=='-')//分隔符不计算
        {
            sum=sum+0;
        }
        else
        {
            sum=sum+(str[i]-48)*x;//主要-48 因为是ASCII码
            x++;
        }
    }
    sum=sum%11;
    if(sum==(str[12]-48)||(str[12]=='X'&&sum==10))//相等或者为X时
    {
        printf("Right\n");
    }
    else
    {
        if(sum==10)//当识别码为X时
        {
            for(j=0; j<12; j++)//输出
            {
                printf("%c",str[j]);
            }
            printf("X");
        }
        else
        {
            for(j=0; j<12; j++)//输出前面12个数字
            {
                printf("%c",str[j]);
            }
            printf("%d\n",sum);//输出正确的识别码
        }
    }
    return 0;
}
