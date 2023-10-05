///* 두 개의 숫자의 합을 계산하는 프로그램 */
//#include <stdio.h>
//
//int main() {
//	int x, y, sum;	// 변수 선언
//	const int a;
//
//	x = 100;				// 대입
//	y = 200;
////	a = 500;			// 앞에서 a는 상수로 선언되었기 때문에 초기화 불가능
//	sum = x + y;		// 계산
//
//	printf("두 수의 합 : %d\n", sum);	// 출력
//
//	return 0;
//}

/* 두 변수를 이용하여 사칙연산 계산하고 출력하기 */
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