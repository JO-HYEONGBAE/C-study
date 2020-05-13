#include<stdio.h>
main(){
	char a='A', *p,**pp;
	p= &a;
	pp =&p;
	printf("*p=%c , **pp=%c",*p,**pp);
}
