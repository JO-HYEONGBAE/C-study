#include<stdio.h>
int change(int *);
main(){
	int a=10;
	int *p;
	p=&a;
	printf("함수 호출전 %d\n",--*p);
	
	change(p);
	printf("함수 호출후 %d\n",*p);
}
int change(int *k){
	*k=*k+*k;
}
