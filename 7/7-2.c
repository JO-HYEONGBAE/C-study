#include <stdio.h>

struct person{
	char name[8];
	int age;
	char gender;
};

struct department{
	char deptname[20];
	struct person person1;
	struct person person2;
	struct person person3;
	int member;
};

main(){
	struct department accounting = {"Accounting",{"홍길동", 30,'M'},
	{"임꺽정",35,'M'},
	{"황진이",27,'F'},3};
	
	printf("person1의 정보 : %s, %d, %c \n",accounting.person1.name,accounting.person1.age,accounting.person1.gender);
	printf("person2의 정보 : %s, %d, %c \n",accounting.person2.name,accounting.person2.age,accounting.person2.gender);
	printf("person3의 정보 : %s, %d, %c \n",accounting.person3.name,accounting.person3.age,accounting.person3.gender);
	printf("sizeof(department) : %dbyte \n",sizeof(department));			
	}

