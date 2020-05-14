#include<stdio.h>
struct entry{
	char fname[20];
	char lname[20];
	char phone[20];
};
	struct entry list[4];
main(){
	for(int i=0;i<4;i++){
		printf("Enter first name : ");
		scanf("%s",list[i].fname);
		printf("Enter last name : ");
		scanf("%s",list[i].lname);
		printf("Enter phone number : ");
		scanf("%s",list[i].phone);
		printf("\n\n");
	}
	
	for(int i=0;i<4;i++){
		printf("Name : %s %s\t\t Phone : %s\n",list[i].fname,list[i].lname,list[i].phone);
	}
}
