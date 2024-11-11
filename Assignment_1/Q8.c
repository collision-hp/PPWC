#include<stdio.h>

int main(){
    float acc;
    float speed=0;
    speed=278*(5.0/18);
    int dist=94;
    acc=(speed*speed)/(dist*2.0);//V2-U2=2AS
    int time=speed/acc;
    printf("The acceleration for the fighter plane is %f\n",acc);
    printf("Time %d\n",time);
    
    return 0;
}