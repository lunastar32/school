#include <iostream>
using namespace std;

string hear[500001];
string see[500001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int  n, m;
	int count = 0;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		cin >> hear[i];
	for (int i = 0; i < m; i++) {
		cin >> see[i];
		for (int i = 0; i < n; i++) {
			if (hear[i] == see[i])
				count++;
		}
	}
	cout << count << '\n';

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (hear[i] == see[j])
				cout << see[j] << '\n';
		}
	}
	return 0;
}