#include<stdio.h>

int main(){
    int arr[]={120,502,118,188,106,447};
    int *ptr1=&arr[0];
    int *ptr2=arr+1;
    int *ptr3=arr+2;
    int *ptr4=&arr[3];
    int *ptr5=&arr[4];
    int *ptr6=&arr[5];
    printf("%d\n",ptr1[0]);
    printf("%d\n",*ptr2);
    printf("%d\n",ptr3[0]);
    printf("%d\n",ptr4[0]);
    printf("%d\n",ptr5[0]);
    printf("%d\n",ptr6[0]);
    return 0;
}