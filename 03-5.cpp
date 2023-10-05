#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(); cout.tie();

	int n; cin >> n;
	int nnum = 1;

	vector<char> result;
	stack<int> stack;

	for (int i = 0; i < n; i++) {
		int x;		cin >> x;
		while (nnum <= x) {		// 입력받은 수열이 비교숫자보다 크거나 같으면
			stack.push(nnum);	// 비교숫자를 하나씩 늘려가면서 stack에 쌓음
			nnum++;
			result.push_back('+');	// 그때마다 result배열에 + 저장
		}
		if (stack.top() == x) {	// stack의 맨 윗 값이 입력받은 수열과 같으면
			stack.pop();				// stack에서 그 값을 빼고
			result.push_back('-');	// result에 - 저장
		}
		else {
			cout << "NO";	// NO 출력 후 이 반복문 자체를 빠져나가야 하므로
			return 0;			// return으로 빠져나가기
		}
	}
	
	for (int i = 0; i < result.size(); i++) {	// result.size() : result 배열의 크기
		cout << result[i] << '\n';
	}
}

	/*for (int i = 0; i < n; i++) {
		if (num[i] >= nnum) {
			while (num[i] >= nnum) {
				stack.push(nnum++);
				result.push_back('+');
			}
			stack.pop();
			result.push_back('-');
		}
		else {
			int a = stack.pop();
			stack.pop();
			if (a > num[i]) {
				cout << "NO";
			}
			else
				result.push_back('-');
		}*/
