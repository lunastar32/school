///* �� ���� ������ ���� ����ϴ� ���α׷� */
//#include <stdio.h>
//
//int main() {
//	int x, y, sum;	// ���� ����
//	const int a;
//
//	x = 100;				// ����
//	y = 200;
////	a = 500;			// �տ��� a�� ����� ����Ǿ��� ������ �ʱ�ȭ �Ұ���
//	sum = x + y;		// ���
//
//	printf("�� ���� �� : %d\n", sum);	// ���
//
//	return 0;
//}

/* �� ������ �̿��Ͽ� ��Ģ���� ����ϰ� ����ϱ� */
#include <stdio.h>

int main() {
	int x, y;

	x = 100;
	y = 300;

	printf("x + y = %d\n", x + y);
	printf("x - y = %d\n", x - y);
	printf("x * y = %d\n", x * y);
	printf("x / y = %lf\n", (double)x / y);
	return 0;
}