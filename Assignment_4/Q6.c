#include<stdio.h>

int main(){
    int a=12,b=52,c=8;
    int *ptr1=&a;
    int *ptr2=&b;
    int *ptr3=&c;

    printf("%d\n",*ptr1+10);
    printf("%d\n",*ptr2+10);
    printf("%d\n",*ptr3+10);
    return 0;
}