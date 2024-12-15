#include<stdio.h>
int main(){
    int a=12;
    int b=25;
    int c=18;
    void *ptr;
    ptr=&a;
    printf("%d \n",*((int*)ptr)+10);

    ptr=&b;
    printf("%d \n",*((int*)ptr)+10);

    ptr=&c;
    printf("%d \n",*((int*)ptr)+10);
    return 0;
}