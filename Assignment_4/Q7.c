#include<stdio.h>
int main(){
    int a=52,b=18;
    int *ptr1=&a;
    int *ptr2=&b;
    if (*ptr1>*ptr2){
        printf("%d \n",*ptr1);
    }
    else{
        printf("%d \n",*ptr2);
    }
    return 0;
}