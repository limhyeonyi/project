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
			printf("�̸��� �Է��Ͻÿ�: ");
			scanf("%s",name);
			
			for(int i=0;i<3;i++)
			{
				printf("����: ");
				scanf("%d",*score+i); 
				*(*score+3) += *(*score+i);
			}
		    *(avg+k) = *(*(score+k)+3)/3.f;
			printf("���:%f\n",*(avg+k));	
		}
	
}



