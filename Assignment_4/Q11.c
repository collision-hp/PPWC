#include<stdio.h>

int main(){
    int arr[]={120,502,118,188,106,447};
    int *ptr=&arr[0];
    for (int i = 0; i < 6; i++){
        printf("%d \n",*&ptr[i]);
    }
    
    return 0;
}