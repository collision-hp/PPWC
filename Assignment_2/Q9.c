#include<stdio.h>

int main(){
    for(int i =7;i>0;i--){
        for(int j=0;j<i;j++){
            printf("%c",65+j);
        }
        for(int j=0;j<7-i;j++){
            printf("  ");
        }
        for(int j=i-1;j>-1;j--){
            
            printf("%c",65+j);
        }
        printf("\n");
    }
    return 0;
}