#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	char name[3][10];
	int score[3][4]; 
	float avg[3];
	int i,j,k;
	
		for(k=0;k<3;k++)
		{
			printf("이름을 입력하시오: ");
			scanf("%s",name);
			
			for(int i=0;i<3;i++)
			{
				printf("점수: ");
				scanf("%d",*score+i); 
				*(*score+3) += *(*score+i);
			}
		    *(avg+k) = *(*(score+k)+3)/3.f;
			printf("평균:%f\n",*(avg+k));	
		}
	
}



