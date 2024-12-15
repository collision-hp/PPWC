#include<stdio.h>
int sumarr(int *ptr){
    int sumarr=0;
    for (int i = 0; i < 4; i++){
        sumarr+=(ptr[i]); // value from address
    }
    printf("Sum is %d \n",sumarr);
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
        printf("%d ",ptr[i]);
    }
    printf("\n");
    
}
void elesum(int *ptr1, int *ptr2, int *ptr3, int *ptr4){
    int elearr[4];
    for(int i=0;i<4;i++){
        int sumele=0;
        sumele+=ptr1[i]+ptr2[i]+ptr3[i]+ptr4[i];
        elearr[i]=sumele;
    }
    printarr(elearr);
}

int main(){
    int a[4],b[4],c[4],d[4];
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

    elesum(a,b,c,d);
    return 0;
}