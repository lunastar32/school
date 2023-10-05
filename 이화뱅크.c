#include <stdio.h>
#pragma warning (disable : 4996)

int main() {
	int save_mon, save_period;
	double year_rate, mon_rate, mon_inter, save_total;
	unsigned int goal;
	char answer;
	int short_mon, mon = 1;

	printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n\n");
	printf("이화뱅크\n");
	printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n\n\n");
	printf("저축이율을 입력하세요(연%) : ");	scanf("%lf", &year_rate);
	printf("한달에 저축할 금액 : ");	scanf("%d", &save_mon);
	printf("얼마동안 저축할까요?(개월) : ");	scanf("%d", &save_period);
	printf("목표액은 얼마인가요(원) :");	scanf("%u", &goal);
	while (getchar() != '\n');

	mon_rate = year_rate / 12;
	mon_inter = mon_rate * save_mon / 100;
	save_total = 0;

	printf("\n\n");
	printf("-------------------------------------------------------\n\n");
	printf("회\t월저축액\t월이율(%%)\t총저축액\n");
	while (1) {
		for (int i = mon; i <= mon + save_period - 1; i++) {
			save_total += mon_inter + save_mon;
			printf("%d\t%d\t\t%lf\t%lf\n", i, save_mon, mon_rate, save_total);
		}
		if (save_total >= goal) {
			printf("축하축하! 목표금액을 달성했습니다.\n\n");
			printf("예금을 종료합니다!\n");
			printf("이화뱅크를 사용해주셔서 감사합니다!\n");
			printf("///////////////////////////////////////////////");
			return;
		}
		else {
			printf("총 저축금액 : %lf\n", save_total);
			printf("목표금액 : %u\n", goal);
			short_mon = goal - save_total;
			printf("목표금액보다 약 %d원이 모자랍니다.\n", short_mon);
			printf("지금부터 약 %d개월 저축하면 됩니다.\n", short_mon / save_mon + 1);

			printf("계속 저축하시겠습니까? : ");
			scanf("%c", &answer);
			while (getchar() != '\n');
			printf("\n");

			if (answer == 'n') {
				printf("이화뱅크를 사용해주셔서 감사합니다! \n");
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