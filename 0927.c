
// 성적 입력받아 총점과 평균 구하기
#include <stdio.h>
#pragma warning (disable : 4996)

int main() {
	int num, n=1;
	int score, sum=0;
	double avg;

	printf("과목 개수를 입력하세요 : ");
	scanf("%d", &num);

	while (n <= num) {
		printf("%d번째 과목의 성적을 입력하세요 : ", n);
		scanf("%d", &score);
		sum += score;
		n++;
	}

	avg = (double)sum / num;
	printf("과목 %d개의 총점은 %d입니다.\n", num, sum);
	printf("과목 %d개의 평균은 %.2lf입니다.\n", num, avg);

	return 0;
}