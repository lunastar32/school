#include <stdio.h>
#include <limits.h>

int main() {
	//char c = 'a';
	//int x = 0;  // 정보량 2^32
	//long long 거대수 = 0; // 2^64ㄴ
	//float f = 3.14;
	//double d = 1.234567890;

	//short year = 0;
	//int sale;
	//long long total_sale = 0;


	//printf("     char 의 크기  : %u 바이트, 최대값 :  %d \n", sizeof(char), CHAR_MAX);
	//printf("      int 의 크기  : %u 바이트, 최대값 :  %d \n", sizeof(int), INT_MAX);
	//printf("long long 의 크기  : %u 바이트, 최대값 : %lld \n", sizeof(long long), LLONG_MAX);
	//printf("    float 의 크기  : %u 바이트 \n", sizeof(float));
	//printf("   double 의 크기  : %u 바이트 \n", sizeof(double));

	//printf("total_sale = %lld\n", total_sale);


	//// 오버플로우
	//int x;
	//unsigned int y;

	//x = INT_MAX;
	//printf("x+1 = %d\n", x + 1);
	//printf("x+2 = %d\n", x + 2);
	//printf("x+3 = %d\n", x + 3);

	//y = 4294967295;
	//printf("y = %u\n", y);
	//printf("y+1 = %d\n", y + 1);
	//printf("y+2 = %d\n", y + 2);
	//printf("y+3 = %d\n", y + 3);

	int x = 10;
	printf("x = %d\n", x); //10진수
	printf("x = %x\n", x); //16진수
	printf("x = %p\n", x); //16진수 (OS 비트를 다 채움)

}

