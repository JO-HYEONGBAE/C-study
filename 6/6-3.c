#include <stdio.h>
#pragma warning(disable:4996)
main(){
	char str[3][50];
	
	for(int i=0;i<3;i++){
	scanf("%s",str[i]);
	printf("%s\n",str[i]);
	}
	printf("%s\n",str[2]);
	printf("%s\n",str[1]);
	printf("%s\n",str[0]);
}
