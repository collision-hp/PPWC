#include<stdio.h>

int main(){
    int x=89;
    int *p1=&x;
    int *p2=&x;
    int *p3=&x;
    printf("%d \n",*p1);
    *p3=100;
    printf("%d",x);
    return 0;
}