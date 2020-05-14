#include <stdio.h>
#include <string.h>
struct person {
	char name[20];
	char gender;
	int age;
};

typedef struct person MAN;
typedef  unsigned char CHAR;
typedef int *PTR;

int main(){
	MAN member;
	CHAR data;
	PTR pt;
	strcpy(member.name,"홍길동");
	member.gender='M';
	member.age=30;
	data =100;
	pt= &(member.age);
	printf("*pt = %d \n",*pt);
	printf("data = %c",data);
}
