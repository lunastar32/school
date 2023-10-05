/*
* //1940
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int num, number;	
	cin >> num >> number;
	vector<int> arr(num, 0);
	for (int i = 0; i < num; i++)
		cin >> arr[i];


	sort(arr.begin(), arr.end());

	int start = 0, end = num - 1;
	int count = 0;


	while (start < end) {
		if (arr[start] + arr[end] == number)			{ start++; end--; count++;}
		else if (arr[start] + arr[end] > number)		{ end--; }
		else if (arr[start] + arr[end] < number)		{ start++; }
	}
	cout << count << '\n';

	return 0;
}

// 새로운 문법에 익숙해지기
// 여러번 써보기
*/

//1253 RE!!
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int num;	cin >> num;
	vector<int> arr(num, 0);
	for (int i = 0; i < num; i++)
		cin >> arr[i];

	sort(arr.begin(), arr.end());
	int count = 0;

	for (int i = 0; i < num; i++) {
		int start = 0, end = num - 1;
		while (start < end) {
			if (arr[start] + arr[end] == arr[i]) {
				if (start != i && end != i){ count++; break; }
				else if (start == i){ start++; }
				else if (end == i) { end--; }
			}
			else if (arr[start] + arr[end] > arr[i]) { end--; }
			else if (arr[start] + arr[end] < arr[i]) { start++; }
			}
	}
	cout << count << '\n';
	return 0;
}