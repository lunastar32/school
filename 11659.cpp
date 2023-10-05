#include <iostream>
using namespace std;

int main() {

	// 시간단축 코드
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;		// N:줄의 개수, M:합을 구해야 하는 횟수
	int i, j, sum;
	int arr[100001];
	cin >> N >> M;

	// arr[]배열 입력받기
	for (int a = 0; a < N; a++) {
		cin >> arr[a];
	}

	// arr[] 배열 자체에 합의 값으로 대입
	for (int a = 1; a < N; a++) {
		arr[a] += arr[a - 1];
	}

	// 구간 합 구하기
	for (int a = 0; a < M; a++) {
		cin >> i >> j;
		sum = arr[j - 1] - arr[i - 2];
		cout << sum << '\n';
	}
	return 0;
}