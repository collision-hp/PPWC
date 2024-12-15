#include<stdio.h>
void arrange(int *a,int *b){
    if(*a>*b){
        int temp=*a;
        *a=*b;
        *b=temp;
    }
}

int main(){
    int nums[]={12,3,56,8,20,654};
    for(int i=0;i<6;i++){
        for (int j=1;j<6;j++){
            arrange(&i,&j);
        }
    }
    for(int i=0;i<6;i++){
        printf("%d ",nums[i]);
    }
    return 0;
}