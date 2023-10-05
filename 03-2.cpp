#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int sum = 1, count = 1;
	int start_index = 1, end_index = 1;

	while (end_index != n) {
		if (sum == n) {
			count++;
			end_index++;
			sum += end_index;
		}
		if (sum > n) {
			sum -= start_index;
			start_index++;
		}
		if (sum < n) {
			end_index++;
			sum += end_index;
		}
	}
	cout << count << '\n';
	return 0;
}