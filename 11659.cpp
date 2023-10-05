#include <iostream>
using namespace std;

int main() {

	// �ð����� �ڵ�
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;		// N:���� ����, M:���� ���ؾ� �ϴ� Ƚ��
	int i, j, sum;
	int arr[100001];
	cin >> N >> M;

	// arr[]�迭 �Է¹ޱ�
	for (int a = 0; a < N; a++) {
		cin >> arr[a];
	}

	// arr[] �迭 ��ü�� ���� ������ ����
	for (int a = 1; a < N; a++) {
		arr[a] += arr[a - 1];
	}

	// ���� �� ���ϱ�
	for (int a = 0; a < M; a++) {
		cin >> i >> j;
		sum = arr[j - 1] - arr[i - 2];
		cout << sum << '\n';
	}
	return 0;
}