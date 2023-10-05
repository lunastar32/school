/*
// 11720 //
#include <iostream>
using namespace std;

int main() {
	int n;
	string numbers; // string : 문자열 (배열)
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
//	// 입력
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> score[i];
//	}
//
//	// 최댓값 구하기
//	max = score[0];
//	for (int i = 1; i < n; i++) {
//		if (max < score[i])
//			max = score[i];
//	}
//
//	// 점수 수정
//	for (int i = 0; i < n; i++) {
//		score[i] = score[i] / max * 100;
//		//if (max != score[i])
//		//	score[i] = score[i] / max * 100;
//	}
//
//	// 평균 구하기
//	for (int i = 0; i < n; i++) {
//		sum += score[i];
//	}
//	avg = (float)sum / n;
//	cout << avg << '\n';
//
//	return 0;
//}

// 다른 방법
// 1. 입력은 똑같이
// 2. 최댓값 찾기
// 3. 점수 수정해서 바로 sum에 더하기
// 4. 평균 구하기
int main() {
	int n;
	float score[1001];
	int max;
	float avg, sum =0 ;
	
	// 입력
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> score[i];
	}
	
	// 최댓값 구하기
	max = score[0];
	for (int i = 1; i < n; i++) {
		if (max < score[i])
			max = score[i];
	}
	
	// 점수 수정 후 더하기
	for (int i = 0; i < n; i++)
		sum += score[i] / max * 100;
	
	avg = sum / n;
	cout << avg << '\n';
	
	return 0;
}