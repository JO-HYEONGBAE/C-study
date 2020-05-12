#include <stdio.h>
int main(){
	register int num1 = 10;
	register long long int num2 =20;
	printf("num1 size= %d, num2 size= %d\n",sizeof(num1),sizeof(num2));
	//printf("%p, %p \n",%num1,%num2);
	
	num2=0;
	for(num1=0;num1<=10;num1++)
		num2 +=num1;
	num1--;
	printf("num1 = %d num2 = %lld",num1,num2);	
}
