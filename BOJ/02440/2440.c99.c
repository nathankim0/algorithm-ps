#include <stdio.h>int main(){	int N;	scanf("%d", &N);	for (int i = 1; i <=N; i++) //개행	{		for (int j=N; j>=i; j--) //별개수		{			printf("*");		}		printf("\n");	}	return 0;}