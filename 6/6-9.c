#include <stdio.h>
main(){
	int *p,*q;
	int a[]={10,20,30,40,50,60,70,80};
	p=&a[3];
	*p=*p+1;
	printf("*p == %d\n",*p+1);
	printf("*(p+3)= %d\n",*(p+3));
	printf("*p == %d\n",*p);
		printf("*p == %d\n",a[3]);
	q=p+3;
	printf("*q == %d\n",*q);
	printf("p-q == %d\n",p-q);
	printf("q-p == %d\n",q-p);
	printf("*p == %d\n",++*p);
}
