#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char q;
    scanf("%d", &n);
    char s[5][(n-1)*4+3];
    memset(s,'.',sizeof(s));
    char a[n];
    scanf("%s",&a);
   for(int i=0;i<n;i++){
    q=a[i];
    if(q=='0'){
        s[0][i*4]='X';
        s[0][i*4+1]='X';
        s[0][i*4+2]='X';
        s[1][i*4]='X';
        s[1][i*4+2]='X';
        s[2][i*4]='X';
        s[2][i*4+2]='X';
        s[3][i*4]='X';
        s[3][i*4+2]='X';
        s[4][i*4]='X';
        s[4][i*4+1]='X';
        s[4][i*4+2]='X';
    }
    if(q=='1'){
        s[0][i*4+2]='X';
        s[1][i*4+2]='X';
        s[2][i*4+2]='X';
        s[3][i*4+2]='X';
        s[4][i*4+2]='X';
    }
    if(q=='2'){
        s[0][i*4]='X';
        s[0][i*4+1]='X';
        s[0][i*4+2]='X';
        s[1][i*4+2]='X';
        s[2][i*4]='X';
        s[2][i*4+1]='X';
        s[2][i*4+2]='X';
        s[3][i*4]='X';
        s[4][i*4]='X';
        s[4][i*4+1]='X';
        s[4][i*4+2]='X';
    }
    if(q=='3'){
        s[0][i*4]='X';
        s[0][i*4+1]='X';
        s[0][i*4+2]='X';
        s[1][i*4+2]='X';
        s[2][i*4]='X';
        s[2][i*4+1]='X';
        s[2][i*4+2]='X';
        s[3][i*4+2]='X';
        s[4][i*4]='X';
        s[4][i*4+1]='X';
        s[4][i*4+2]='X';
    }
    if(q=='4'){
        s[0][i*4]='X';
        s[0][i*4+2]='X';
        s[1][i*4]='X';
        s[1][i*4+2]='X';
        s[2][i*4]='X';
        s[2][i*4+1]='X';
        s[2][i*4+2]='X';
        s[3][i*4+2]='X';
        s[4][i*4+2]='X';
    }
    if(q=='5'){
        s[0][i*4]='X';
        s[0][i*4+1]='X';
        s[0][i*4+2]='X';
        s[1][i*4]='X';
        s[2][i*4]='X';
        s[2][i*4+1]='X';
        s[2][i*4+2]='X';
        s[3][i*4+2]='X';
        s[4][i*4]='X';
        s[4][i*4+1]='X';
        s[4][i*4+2]='X';
    }
    if(q=='6'){
        s[0][i*4]='X';
        s[0][i*4+1]='X';
        s[0][i*4+2]='X';
        s[1][i*4]='X';
        s[2][i*4]='X';
        s[2][i*4+1]='X';
        s[2][i*4+2]='X';
        s[3][i*4]='X';
        s[3][i*4+2]='X';
        s[4][i*4]='X';
        s[4][i*4+1]='X';
        s[4][i*4+2]='X';
    }
    if(q=='7'){
        s[0][i*4]='X';
        s[0][i*4+1]='X';
        s[0][i*4+2]='X';
        s[0][i*4+2]='X';
        s[1][i*4+2]='X';
        s[2][i*4+2]='X';
        s[3][i*4+2]='X';
        s[4][i*4+2]='X';
    }
    if(q=='8'){
        s[0][i*4]='X';
        s[0][i*4+1]='X';
        s[0][i*4+2]='X';
        s[1][i*4]='X';
        s[1][i*4+2]='X';
        s[2][i*4]='X';
        s[2][i*4+1]='X';
        s[2][i*4+2]='X';
        s[3][i*4]='X';
        s[3][i*4+2]='X';
        s[4][i*4]='X';
        s[4][i*4+1]='X';
        s[4][i*4+2]='X';
    }
    if(q=='9'){
        s[0][i*4]='X';
        s[0][i*4+1]='X';
        s[0][i*4+2]='X';
        s[1][i*4]='X';
        s[1][i*4+2]='X';
        s[2][i*4]='X';
        s[2][i*4+1]='X';
        s[2][i*4+2]='X';
        s[3][i*4+2]='X';
        s[4][i*4]='X';
        s[4][i*4+1]='X';
        s[4][i*4+2]='X';
    }
   }
    for(int i=0;i<5;i++){
        for(int j=0;j<(n-1)*4+3;j++){
            printf("%c",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}