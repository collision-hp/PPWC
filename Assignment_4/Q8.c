#include<stdio.h>

int main(){
    int arr[]={0,10,20,30,40,50,60,70,80,90};
    int *ptr=arr;
    for (int i = 0; i < 10; i++){
        printf("%p %d \n",ptr+i,*&ptr[i]);
    }
    return 0;
}