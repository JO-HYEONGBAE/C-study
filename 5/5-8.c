#include <stdio.h>
void by_value(int,int,int);
void by_ref(int *,int *,int *);
int main(){
	int x=2, y=4, z=6;
	printf("Befire calling by_value() \t: ");
	printf("x = %d y = %d z = %d\n",x,y,z);
	by_value(x,y,z);
	printf("After calling by_value() \t: ");
	printf("x = %d y = %d z = %d\n",x,y,z);
	by_ref(&x, &y, &z);
	printf("After calling by_ref() \t\t: ");
	printf("x = %d y = %d z = %d\n",x,y,z);
}
void by_value(int a,int b,int c){
	a=0;
	b=0;
	c=0;
}
void by_ref(int *a,int *b, int *c){
	*a=0;
	*b=0;
	*c=0;
}
