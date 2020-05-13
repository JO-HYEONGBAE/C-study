#include<stdio.h>
main(){
	int *p,j,i=3;
	printf("%d\n",&p);
	p=&i;
	j=*p;
	printf("%d\n",*p);
	printf("%x\n",p);
	printf("%x\n",&i);
	printf("%d\n",j);
}
