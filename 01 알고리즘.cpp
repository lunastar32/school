/*
#include <iostream>
#include <cstdlib> // rand() - ���� ����
#include <ctime> // time() - ����� ������ ��ȯ���� �޶���
using namespace std;

int main() {
	int findNumber;
	srand(time(NULL)); // ������ ���� �߻�
	findNumber = rand() % 100; // rand�� ������ ���� Ȱ��

	for (int i = 0; i < 100; i++) {
		if (i == findNumber) {
			cout << i; // ���(printf)
			break;
		}
	}
	return 0;
}
*/

// 2750 �� �����ϱ� //
#include <iostream>
#include <algorithm> // sort(����)��� �Լ� ��밡��
using namespace std;

int arr[1000001]; // �迭�� main�Լ� �ۿ��� �����ؾ��� (?)

int main() {
	int num;
	int tmp;
	cin >> num; // cin : �Է� (scanf)

	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}

	//for (int i = 0; i < num-1; i++) {
	//	for (int j = i + 1; j < num; j++) {
	//		if (arr[i] > arr[j]) {
	//			tmp = arr[i];
	//			arr[i] = arr[j];
	//			arr[j] = tmp;
	//		}
	//	}
	//}

	sort(arr, arr + num); // �Է¹��� �� ���� sort(�迭, �迭 + �迭�� ũ��);

	for (int i = 0; i < num; i++) {
		cout << arr[i] << "\n";
	}
	return 0;
}
