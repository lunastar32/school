
// ���� �Է¹޾� ������ ��� ���ϱ�
#include <stdio.h>
#pragma warning (disable : 4996)

int main() {
	int num, n=1;
	int score, sum=0;
	double avg;

	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d", &num);

	while (n <= num) {
		printf("%d��° ������ ������ �Է��ϼ��� : ", n);
		scanf("%d", &score);
		sum += score;
		n++;
	}

	avg = (double)sum / num;
	printf("���� %d���� ������ %d�Դϴ�.\n", num, sum);
	printf("���� %d���� ����� %.2lf�Դϴ�.\n", num, avg);

	return 0;
}