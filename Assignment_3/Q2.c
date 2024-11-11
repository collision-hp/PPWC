#include<stdio.h>

void sumarr(int a[], int b[], int r[],int size){
    for (int i = 0; i < size; i++){
        r[i]=a[i]+b[i];
        printf("%d ",r[i]);
    }
}

int main(){
    int size;
    int a[3],b[3],r[3];
    printf("Enter the size of array");
    scanf("%d",&size);
    for (int i = 0; i < size; i++){
        printf("Enter the elements of array a");
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < size; i++){
        printf("Enter the elements of array b");
        scanf("%d",&b[i]);
    }
    sumarr(a,b,r,size);
    return 0;
}
