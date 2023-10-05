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
		while (nnum <= x) {		// �Է¹��� ������ �񱳼��ں��� ũ�ų� ������
			stack.push(nnum);	// �񱳼��ڸ� �ϳ��� �÷����鼭 stack�� ����
			nnum++;
			result.push_back('+');	// �׶����� result�迭�� + ����
		}
		if (stack.top() == x) {	// stack�� �� �� ���� �Է¹��� ������ ������
			stack.pop();				// stack���� �� ���� ����
			result.push_back('-');	// result�� - ����
		}
		else {
			cout << "NO";	// NO ��� �� �� �ݺ��� ��ü�� ���������� �ϹǷ�
			return 0;			// return���� ����������
		}
	}
	
	for (int i = 0; i < result.size(); i++) {	// result.size() : result �迭�� ũ��
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
