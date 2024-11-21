#include<stdio.h>
int sumarr(int *ptr){
    int sum=0;
    for (int i = 0; i < 4; i++){
        sum+=(*(ptr+i)); // value from address
    }
    printf("Sum is %d \n",sum);
}
void readarr(int *ptr){
    printf("Entering array \n");
    for (int i = 0; i < 4; i++){
        printf("Element of %d",i);
        scanf("%d",ptr+i); // store in address
    }
}
void printarr(int *ptr){
    for (int i = 0; i < 4; i++){
        printf("%d ",*(ptr+i));
    }
    printf("\n");
    
}

int main(){
    int a[4],b[4],c[3],d[4];
    readarr(a);
    printarr(a);
    sumarr(a);

    readarr(b);
    printarr(b);
    sumarr(b);
    
    readarr(c);
    printarr(c);
    sumarr(c);
    
    readarr(d);
    printarr(d);
    sumarr(d);

    return 0;
}