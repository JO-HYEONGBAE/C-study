#include <stdio.h>
#pragma warning(disable:4996)
int max(int,int);
int min(int a,int b);
main(){
	int a,b;
	printf("정수 2개를 입력하시오");
	scanf("%d %d",&a,&b);
	printf("max(%d,%d) = %d\n",a,b,max(a,b));
	printf("min(%d,%d) = %d\n",a,b,min(a,b));
} 
int max(int x,int y){
	return (x >y ? x :y);
}
int min(int x,int y){
	return (x >y ? y: x);
}
