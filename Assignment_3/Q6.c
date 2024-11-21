#include<stdio.h>

int main(){
    int p[]={1,2,3,4};
    int q[]={2,4,5,6};
    int found;
    for (int i = 0; i < 4; i++){
        found=0;
        for (int j = 0; j < 4; j++){
            if(p[i]==q[j]){
                found=1;
                break;
            }
        }
        if (found==0){
            printf("%d\n",p[i]);
        }
    }
    return 0;
}