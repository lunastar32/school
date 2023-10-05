/*
#include <iostream>
#include <cstdlib> // rand() - 난수 생성
#include <ctime> // time() - 출력할 때마다 반환값이 달라짐
using namespace std;

int main() {
	int findNumber;
	srand(time(NULL)); // 임의의 난수 발생
	findNumber = rand() % 100; // rand로 생성된 난수 활용

	for (int i = 0; i < 100; i++) {
		if (i == findNumber) {
			cout << i; // 출력(printf)
			break;
		}
	}
	return 0;
}
*/

// 2750 수 정렬하기 //
#include <iostream>
#include <algorithm> // sort(정렬)라는 함수 사용가능
using namespace std;

int arr[1000001]; // 배열을 main함수 밖에서 정의해야함 (?)

int main() {
	int num;
	int tmp;
	cin >> num; // cin : 입력 (scanf)

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

	sort(arr, arr + num); // 입력받은 수 정렬 sort(배열, 배열 + 배열의 크기);

	for (int i = 0; i < num; i++) {
		cout << arr[i] << "\n";
	}
	return 0;
}
