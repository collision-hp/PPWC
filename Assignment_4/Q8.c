#include<stdio.h>
int main(){
    int arr[]={0,10,20,30,40,50,60,70,80,90};
    for (int i=0;i<10;i++){
        printf("%p %d\n",&i,i);
    }
    return 0;
}