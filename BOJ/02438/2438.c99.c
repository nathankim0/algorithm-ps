#include <stdio.h>int main(){	int N, num1, num2; //num1은 줄 num2는 별 개수 N은 입력	scanf("%d", &N);	for (num1 = 1; num1 <= N; num1++)	{		for (num2 = 1; num2 <= num1; num2++)		{			printf("*");		}		printf("\n");	}	return 0;}