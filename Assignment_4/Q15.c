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
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",d);
    int max;
    if(*ap>*bp && *ap>*cp && *ap>*dp){
        max=*ap;
    }
    else if(*bp>*ap && *bp>*cp && *bp>*dp){
        max=*bp;
    }
    else if(*cp>*ap && *cp>*bp && *cp>*dp){
        max=*bp;
    }
    else if(*dp>*ap && *dp>*cp && *dp>*bp){
        max=*bp;
    }
    printf("%d ",max);
    return 0;
}