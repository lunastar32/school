#include <stdio.h>
#pragma warning (disable : 4996)

int main() {
	int save_mon, save_period;
	double year_rate, mon_rate, mon_inter, save_total;
	unsigned int goal;
	char answer;
	int short_mon, mon = 1;

	printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n\n");
	printf("��ȭ��ũ\n");
	printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n\n\n");
	printf("���������� �Է��ϼ���(��%) : ");	scanf("%lf", &year_rate);
	printf("�Ѵ޿� ������ �ݾ� : ");	scanf("%d", &save_mon);
	printf("�󸶵��� �����ұ��?(����) : ");	scanf("%d", &save_period);
	printf("��ǥ���� ���ΰ���(��) :");	scanf("%u", &goal);
	while (getchar() != '\n');

	mon_rate = year_rate / 12;
	mon_inter = mon_rate * save_mon / 100;
	save_total = 0;

	printf("\n\n");
	printf("-------------------------------------------------------\n\n");
	printf("ȸ\t�������\t������(%%)\t�������\n");
	while (1) {
		for (int i = mon; i <= mon + save_period - 1; i++) {
			save_total += mon_inter + save_mon;
			printf("%d\t%d\t\t%lf\t%lf\n", i, save_mon, mon_rate, save_total);
		}
		if (save_total >= goal) {
			printf("��������! ��ǥ�ݾ��� �޼��߽��ϴ�.\n\n");
			printf("������ �����մϴ�!\n");
			printf("��ȭ��ũ�� ������ּż� �����մϴ�!\n");
			printf("///////////////////////////////////////////////");
			return;
		}
		else {
			printf("�� ����ݾ� : %lf\n", save_total);
			printf("��ǥ�ݾ� : %u\n", goal);
			short_mon = goal - save_total;
			printf("��ǥ�ݾ׺��� �� %d���� ���ڶ��ϴ�.\n", short_mon);
			printf("���ݺ��� �� %d���� �����ϸ� �˴ϴ�.\n", short_mon / save_mon + 1);

			printf("��� �����Ͻðڽ��ϱ�? : ");
			scanf("%c", &answer);
			while (getchar() != '\n');
			printf("\n");

			if (answer == 'n') {
				printf("��ȭ��ũ�� ������ּż� �����մϴ�! \n");
				return;
			}
			else if (answer == 'y') {
				mon = mon + save_period;
				save_period = short_mon / save_mon + 1;
			}
		}
	}
	return 0;
}