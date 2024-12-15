#include<stdio.h>

int main(){
    int arr1[]={10,13,20,33,44};
    float arr2[]={10.2,13.3,20.0,33.3,45.3,89.9};
    int *ptr1=arr1;
    float *ptr2=arr2;
    for(int i=0;i<5;i++){
        printf("%p %d\n",ptr1+i,ptr1[i]);
    }
    for(int i=0;i<6;i++){
        printf("%p %f\n",ptr2+i,ptr2[i]);
    }
    return 0;
}