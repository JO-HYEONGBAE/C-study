#include <stdio.h>
#pragma warning(disable:4996)

main(){
	int score[3][3][3];
	int sum[3]={0};
	
	int a,b,c,d,e,f;
	for(c=0;c<3;c++){
		for(b=0;b<3;b++){
			printf("%d반 %d번 학생의 국어,수학,영어 점수: ",c+1,b+1);
			scanf("%d %d %d",&score[c][b][0],&score[c][b][1],&score[c][b][2]);
			}
			printf("\n");
	}
	
	for(e=0;e<3;e++){
		for(d=0;d<3;d++){
			for(f=0;f<3;f++){
				sum[f]+=score[e][d][f];
			}
		}
	}
	printf("전체반 9명의 국어 총점: %d ,평균:%d \n",sum[0],sum[0]/9);
	printf("전체반 9명의 수학 총점: %d ,평균:%d \n",sum[1],sum[1]/9);
	printf("전체반 9명의 영어 총점: %d ,평균:%d \n",sum[2],sum[2]/9);
	
}
