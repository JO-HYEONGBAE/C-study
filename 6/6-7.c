#include <stdio.h>
main(){
	int a=100;
	char b='b';
	void *p=NULL;
	p=(int *)&a;
	p=p+1;
	printf("*p= %d\n",*(int *)p);
		printf("*p= %d\n",*(int *)p+1);
			printf("*p= %d\n",a);
	p=(char *)&b;
	printf("*p= %c\n",*(char *)p);
}
