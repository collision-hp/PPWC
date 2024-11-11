#include<stdio.h>
void cpy(int arr[]){
    for (int i = 0; i < 7; i++){
        int unique=1;
        for (int j = 0; j < i; j++){
            if(arr[i]==arr[j]){
                unique=0;
                break;
            }
        }
        if(unique){
            printf("%d ",arr[i]);
        }
    }
}
int main(){
    int arr[]={4,7,7,3,2,5,5};
    cpy(arr);
    return 0;
}