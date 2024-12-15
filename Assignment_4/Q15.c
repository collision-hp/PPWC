#include<stdio.h>

int main(){
    int a,b,c,d;
    int *ap=&a;
    *ap=55;
    int *bp=&b;
    *bp=105;
    int *cp=&c;
    *cp=89;
    int *dp=&d;
    *dp=68;
    // printf("%d\n",a);
    // printf("%d\n",b);
    // printf("%d\n",c);
    // printf("%d\n",d);
    int max=b;
    if(a>max){
        max=a;
    }
    if(c>max){
        max=c;
    }
    if(d>max){
        max=d;
    }
    int *maxvar=&max;
    printf("%d ",*maxvar);
    return 0;
}