#include<stdio.h>
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int a=345;
	int b=45;
	printf("%d %p\n",a,&a);
	printf("%d %p\n",b,&b);
	swap(&a,&b);
	printf("%d %p\n",a,&a);
	printf("%d %p\n",b,&b);
return 0;
}