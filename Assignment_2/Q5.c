// #include<stdio.h>

// int main(){
//     float x=25.0,y=10.0;
//     if(y!=(x-10.0)){
//         x-=10.0;
//     }
//     else{
//         x/=2.0;
//     }
//     printf("%f",x);
//     return 0;
// }

#include <stdio.h>
int main(){
    float x = 25.0, y = 10.0;
    if (y < 15.0)
        if (y >= 0.0)
            x = 5 * y;
        else
            x = 2 * y;
    else
        x = 3 * y;
    return 0;
}
1
