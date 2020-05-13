#include <stdio.h>
main(){
	static int a[]={10,20,30,40,50};
	int *pa,b,c,d,f;
	pa=&a[0];//pa=a 같다 
	//printf("pa= %d",*(pa+1));
	b= *pa + *(pa+5);// 10+50
	pa +=4;
	//printf("pa=%d",*pa);//50
	c=*pa + *(pa-4);
	d= *pa+5;
	f=pa[2];
	printf("b=%d c=%d d=%d f=%d",b,c,d,f);
}
