#include <stdio.h>
#pragma warning(disable:4996)
void score_average(int gr[][2][3],int,int,int);
main(){
	int score[4][2][3]={{{10,20,30},{10,10,10}},
	{{0,40,50},{10,10,10}},
	{{30,30,30},{50,50,50}},
	{{20,20,20},{0,0,0}}};
	score_average(score,4,2,3);
}
void score_average(int gr[][2][3],int size, int row, int column){
	int student_sum=0, subject_sum=0;
	int subject_average =0;
	for(int i=0;i<size;i++){
		student_sum=0;
		for(int j=0;j<row;j++){
			subject_sum=0;
			for(int k=0;k<column;k++){
				subject_sum +=gr[i][j][k];
			}
			subject_average=subject_sum/column;
			printf("student%d average= %d\n",j+1,subject_average);
			student_sum+=subject_average;
		}
		printf("class%d average = %d\n\n",i+1,student_sum/row);
		
		}
	
}
