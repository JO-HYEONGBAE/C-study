#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 3

void formData(char c,int size);
void  leapYearCheck(int years,int i);
//출력할 구조체 작성 
struct member {
	char name[20];		//이름 
	char birthDay[30];	//생일 
	char check;			//윤년 여부 
	char area[20];		// 출생 지역 
	char gender;		// 성별 
	char major[20]; 	//학과이름 
} x[3];

	char tName [SIZE][20];	//입력할 이름 
	char tMajor [SIZE][20]; //입력할 학과 
	char tBirth [SIZE][50]; //입력할 주민번호 ex(910101-1014112) 

	int year[SIZE]; 		//오름차순 및 년도 더하기 
	int month[SIZE];		//오름차순 
	int day[SIZE];	
	
	char change[10];		//주민번호 문자열을 잘라 담아줄 변수 
int main(){

	for(int i=0;i<SIZE;i++){
		printf("이름 : ");
		scanf("%s",&tName[i]);
	
		printf("학과  : ");
		scanf("%s",&tMajor[i]);
	
		printf("주민등록번호 : ");
		scanf("%s",&tBirth[i]);
	}
	printf("\n\n");
	
	for(int i=0;i<SIZE;i++){
			strcpy(x[i].name,tName[i]);
			strcpy(x[i].major,tMajor[i]);
			
			strncpy(change,tBirth[i]+2,2);
			month[i]=atoi(change);
			strncpy(change,tBirth[i]+4,2);
			day[i]=atoi(change);
			
			formData(tBirth[i][7],i);
			
		//	x[i].birthDay=year[i]+"년 "+month[i]+"월 "+day[i]+"일"; 
			sprintf(x[i].birthDay,"%d년 %d월 %d일",year[i],month[i],day[i]);
			
			printf("이름: %s 생년월일 : %s 윤년 여부 : %c 출생지역 : %s 성별 : %c 학과: %s \n",x[i].name,x[i].birthDay,x[i].check,x[i].area,x[i].gender,x[i].major); 
	}
}


//주민등록번호 7번째 번호로 앞 2자리 년도 및 성별 국적  구하기	
void formData(char c,int size){

	if(c=='1'){
				
			x[size].gender='M';
			strcpy(x[size].area,"대한민국");
			strncpy(change,tBirth[size]+0,2);
			year[size]=1900+atoi(change);
		
		}
		 else if(c=='2'){
		 	x[size].gender='F';
		 	strcpy(x[size].area,"대한민국");
		 	strncpy(change,tBirth[size]+0,2);
			year[size]=1900+atoi(change);
			
		
		 }
	
		 else if(c=='3'){
			x[size].gender='M';
			strcpy(x[size].area,"대한민국");
			strncpy(change,tBirth[size]+0,2);
			year[size]=2000+atoi(change);
			
		} 
		else if(c=='4' ){
		
			x[size].gender='F';
			strcpy(x[size].area,"대한민국");
			strncpy(change,tBirth[size]+0,2);
			year[size]=2000+atoi(change); 
		
		}
		 else if(c=='5'){
		 	x[size].gender='M';
		 	strcpy(x[size].area,"외국");
		 	strncpy(change,tBirth[size]+0,2);
			year[size]=1900+atoi(change);
		
		 }
		 
		 else if(c=='6'){
		 
		 	x[size].gender='F';
		 	strcpy(x[size].area,"외국");
			strncpy(change,tBirth[size]+0,2);
			year[size]=1900+atoi(change);
			
		}	
		else if(c=='7'){ 
			x[size].gender='M';
			strcpy(x[size].area,"외국");
			strncpy(change,tBirth[size]+0,2);
			year[size]=2000+atoi(change);
		}
		
		else if (c=='8'){
			x[size].gender='F';
			strcpy(x[size].area,"외국");
		 	strncpy(change,tBirth[size]+0,2);
			year[size]=2000+atoi(change);
		}
		else if(c=='9'){
			x[size].gender='M';
			strcpy(x[size].area,"대한민국");
			strncpy(change,tBirth[size]+0,2);
			year[size]=1800+atoi(change);
			
		}
		else{
			x[size].gender='F';
			strcpy(x[size].area,"대한민국");
			strncpy(change,tBirth[size]+0,2);
			year[size]=1800+atoi(change);
		}	
		leapYearCheck(year[size],size);
}

//윤년체크 
void  leapYearCheck(int years,int i) {
	if(years % 4==0 && years % 100 !=0 || years %400==0)
		x[i].check='O';
	 else x[i].check='X';
}
