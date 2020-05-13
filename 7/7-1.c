#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

struct person{
	char name[8];
	int age;
	char gender;
};

main(){
	struct person X= {"홍길동",30,'M'};
	struct person Y;
	strcpy(Y.name,"임꺽정");
	Y.age=35;
	Y.gender='W';
	printf("X의 정보 : %s, %d, %c \n",X.name,X.age,X.gender);
	printf("Y의 정보 : %s, %d, %c \n",Y.name,Y.age,Y.gender); 
	printf("sizeof(person.name) : %dbyte \n",sizeof(X.name));
	printf("sizeof(person.age) : %dbyte \n",sizeof(X.age));
	printf("sizeof(person.gender) : %dbyte \n",sizeof(X.gender));
		printf("sizeof(person) : %dbyte \n",sizeof(X));	
}
