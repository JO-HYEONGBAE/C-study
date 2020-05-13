#include <stdio.h>
main(){
	int a[]={1,3,3,4};
	int b[]={5,6,7,8};
	int *pa[2];
	
	pa[0]=a;
	pa[1]=b;
	printf("*(pa[0]) =%d\n",*(pa[0]));
	printf("*(pa[0]+1) =%d\n",*(pa[0]+1));
	printf("*pa[1] =%d\n",*pa[1]);
	printf("*pa[1]+15 =%d\n",*pa[1]+15);
}
