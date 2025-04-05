#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<time.h>
#include<stdlib.h>
//로또 번호 추천 해주는 기능 구현하기 번호 구간은  1~45 6개의 숫자. 랜덤 생성 
int main(void)
{
	int num ,j,gg = 0;
	
	printf("로또 판매점 입니다 몇 게임 하시나요?");
	scanf("%d", &j);
	if (j <= 5)
	{
		printf("%d 게임 짜리 몇 장 드릴까요?:" , j );
		scanf("%d", &num);
		if (num <= 50)
		{
			srand(time(NULL));
			while (gg < num)
			{
				printf("=====LOTTO 자동 %d천원=====\n", j);
				for (int k = 1; k <= j; k++)
				{
					printf("%d게임:", k);

					for (int i = 0; i <= 5; i++)
					{
						printf("%d ", rand() % 45 + 1);
					}
					printf("\n");
				}
				gg++;
			}
		}
		else
		{
			printf("하루에 50장 이상 구매불가, 로또도 중독입니다.");
		}
	}   
	else
	{
		printf("한장에 최대 5게임이 최대 입니다.");
	}
		return 0;
}
