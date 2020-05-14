#include<stdio.h>
struct num calc(struct num);
struct num {
	int x;
	int y;
	int sum;
	int mul;
};

main(){
	struct num number1;
	number1.x=10;
	number1.y=20;
	number1 = calc(number1);
	
	printf("x:%d, y:%d, sum:%d, mul:%d \n",number1.x,number1.y,number1.sum,number1.mul);
}

struct num calc(struct num number2){
	number2.sum = number2.x + number2.y;
	number2.mul = number2.x * number2.y;
	return(number2);
}
