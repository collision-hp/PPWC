// Bubble sort
#include <stdio.h>
#include<stdbool.h>
void swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void bubblesort(int a[]){
    bool swapped;
    for(int i=0;i<=5;i++){
        for(int j=0;j<5-i-1;j++){
            if(a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
                swapped=true;
            }
            if(swapped==false){
                break;
            }
        }
    }
}
void printarr(int a[]){
    for(int i=0;i<5;i++){
        printf("%d",a[i]);
    }
}
int main(){
    int a[] = {4, 1, 5, 2, 3};
    bubblesort(a);
    printarr(a);
    return 0;
}