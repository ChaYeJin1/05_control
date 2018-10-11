#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	
	printf("Input an integer : ");
	scanf("%d", &i);
	
	if (i > 0)
	{
		printf("양 수 입 니 다 .");
	
	}
	else if (i == 0)
	{
		printf("0 입니다.");
	}
	else
	{
		printf("음 수 입 니 다 .");
	}
	return 0;
}
