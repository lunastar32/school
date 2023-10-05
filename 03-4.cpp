#include <iostream>
#include <deque>
using namespace std;

typedef pair<int, int> Node;		// Node라는 구조 두개의 변수를 받음

int main() {
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int N, L;
	cin >> N >> L;
	deque<Node> mydeque;

	for (int i = 0; i < N; i++) {
		int now;
		cin >> now;

		while (mydeque.size() && mydeque.back().first > now)	// 덱의 마지막 숫자가 입력값보다 크면
			mydeque.pop_back();		// 덱의 끝 원소 삭제

		mydeque.push_back(Node(now, i));	// 덱의 끝 원소 추가
		
		if (mydeque.front().second <= i - L)	// 찾는 범위에서 벗어나면
			mydeque.pop_front();		// 덱의 앞 원소 삭제

		cout << mydeque.front().first << ' ';
	}
	return 0;
}