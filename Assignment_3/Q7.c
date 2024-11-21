#include<stdio.h>

int main(){
    int arr[]={4,7,7,3,2,5,5};
    int found;
    for (int i=0;i<7;i++){
        found=0;
        for (int j=i+1;j<7;j++){
            if(arr[i]==arr[j]){
                found=1;
                break;
            }
        }
        if(found==0){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}