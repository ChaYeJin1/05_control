#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	
	printf("Input a char :");
	scaf("%c", &c);
	
	if('A' <= c && c <='Z')
	{
		printf("�� �� �� �� �� �� .");
	}
	else if ('a' <= c && c <='z') 
	{
		printf("�� �� �� �� �� �� .");
	}
	else if ('0' <= c && c <='9')
	{
		printf("�� �� �� �� �� .");
	}
	else
	{
		printf("��Ÿ �� �� �� �� �� .");
	}
	return 0;
}
