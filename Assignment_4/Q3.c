#include<stdio.h>
#include<stdlib.h>
int main(){
	void *p;
	float x=6.7;
	p=&x;
	printf("%f\n",*((float*)p));
	
	float y=1.2;
	p=&y;
	printf("%f\n",*((float*)p));
	
	float z=2.3;
	p=&z;
	printf("%f\n",*((float*)p));
return 0;
}