#include <stdio.h>
#include <limits.h>

int main() {
	//char c = 'a';
	//int x = 0;  // ������ 2^32
	//long long �Ŵ�� = 0; // 2^64��
	//float f = 3.14;
	//double d = 1.234567890;

	//short year = 0;
	//int sale;
	//long long total_sale = 0;


	//printf("     char �� ũ��  : %u ����Ʈ, �ִ밪 :  %d \n", sizeof(char), CHAR_MAX);
	//printf("      int �� ũ��  : %u ����Ʈ, �ִ밪 :  %d \n", sizeof(int), INT_MAX);
	//printf("long long �� ũ��  : %u ����Ʈ, �ִ밪 : %lld \n", sizeof(long long), LLONG_MAX);
	//printf("    float �� ũ��  : %u ����Ʈ \n", sizeof(float));
	//printf("   double �� ũ��  : %u ����Ʈ \n", sizeof(double));

	//printf("total_sale = %lld\n", total_sale);


	//// �����÷ο�
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
	printf("x = %d\n", x); //10����
	printf("x = %x\n", x); //16����
	printf("x = %p\n", x); //16���� (OS ��Ʈ�� �� ä��)

}

