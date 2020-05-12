#include <stdio.h>
#pragma warning(disable:4996)

int main(){
	int i,j;
	
	for(i=1;i<=5;i++){
	
		for(j=5;j>=1;j--){
			if(i==j){
			printf("*");
			}else
			printf(" ");
		}
		printf("\n");
}
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(i==j)
			printf("*");
			else
			printf(" ");	
		}
		printf("\n");
	}
	
}
