/*
// 11720 //
#include <iostream>
using namespace std;

int main() {
	int n;
	string numbers; // string : ���ڿ� (�迭)
	int sum =0;

	cin >> n;
	cin >> numbers;

	for (int i = 0; i < numbers.length(); i++) {
		sum += numbers[i] - '0';
	}
	cout << sum << '\n';
	return 0;
}
*/

// 1546 //
#include <iostream>
using namespace std;

//int main() {
//	int n;
//	float score[1001];
//	int max;
//	float avg, sum =0 ;
//
//	// �Է�
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> score[i];
//	}
//
//	// �ִ� ���ϱ�
//	max = score[0];
//	for (int i = 1; i < n; i++) {
//		if (max < score[i])
//			max = score[i];
//	}
//
//	// ���� ����
//	for (int i = 0; i < n; i++) {
//		score[i] = score[i] / max * 100;
//		//if (max != score[i])
//		//	score[i] = score[i] / max * 100;
//	}
//
//	// ��� ���ϱ�
//	for (int i = 0; i < n; i++) {
//		sum += score[i];
//	}
//	avg = (float)sum / n;
//	cout << avg << '\n';
//
//	return 0;
//}

// �ٸ� ���
// 1. �Է��� �Ȱ���
// 2. �ִ� ã��
// 3. ���� �����ؼ� �ٷ� sum�� ���ϱ�
// 4. ��� ���ϱ�
int main() {
	int n;
	float score[1001];
	int max;
	float avg, sum =0 ;
	
	// �Է�
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> score[i];
	}
	
	// �ִ� ���ϱ�
	max = score[0];
	for (int i = 1; i < n; i++) {
		if (max < score[i])
			max = score[i];
	}
	
	// ���� ���� �� ���ϱ�
	for (int i = 0; i < n; i++)
		sum += score[i] / max * 100;
	
	avg = sum / n;
	cout << avg << '\n';
	
	return 0;
}