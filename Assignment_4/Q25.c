#include<stdio.h>

int main(){
    int mat[3][3]={1,2,3,4,5,6,7,8,9};
    int trp[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if (i==j){
                trp[i][j]=mat[i][j];
            }
            else{
                trp[i][j]=mat[j][i];
            }
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",trp[i][j]);
        }
        printf("\n");
    }
    return 0;
}