#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	
	printf("Input a char :");
	scaf("%c", &c);
	
	if('A' <= c && c <='Z')
	{
		printf("대 문 자 입 니 다 .");
	}
	else if ('a' <= c && c <='z') 
	{
		printf("소 문 자 입 니 다 .");
	}
	else if ('0' <= c && c <='9')
	{
		printf("숫 자 입 니 다 .");
	}
	else
	{
		printf("기타 글 자 입 니 다 .");
	}
	return 0;
}
