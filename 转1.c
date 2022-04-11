#include<stdio.h>
int main(){      //有些冗余，以后再想想怎样优化
    int n,i=0,j,tmp,count,max=0;
    scanf("%d",&n);
    if (n==1){      
        scanf("%d",&tmp);
        printf("%d 1\n",tmp);
        return 0;
    }
    int s[n+1],l[n+1];   //s[]存储次数，下标表示出现了多少次，相对应的出现这么多次的整数值
    while(n>=1){
        count=1;
        scanf("%d",&tmp);
        l[i++]=tmp;        //l[]存储输入的整数值，下标从0开始
        for(j=0;j<i-1;j++){    
            if (tmp==l[j]){
                s[++count]=tmp;   //下标从2开始，因为目标数字唯一，其他循环时不会到s[max],即已有下标最大存储了值的空间
            }
        }
        if(count>max){
            max=count;   //更新max
        }
        n--;
    }
    printf("%d %d\n",s[max],max);
    return 0;
}
