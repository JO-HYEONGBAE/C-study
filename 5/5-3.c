#include <stdio.h>
void swap(int *, int *);
int main(){
	int a=3; int b=5;
	printf ("호출전 a=%d b=%d \n",a,b);
	swap(&a,&b);
	
	printf("호출 후 a=%d, b=%d \n",a,b);
}

void swap(int *x,int *y){
	int temp;
	temp= *x;
	*x=*y;
	*y=temp;
	printf("함수 내 a=%d b=%d\n",*x,*y); 
}
