/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;		cin >> T;
	int tc = 1;
	while (tc <= T) {
		int N, M;	cin >> N >> M;
		vector<int> A(N, 0);
		vector<int> B(M, 0);


	}
	return 0;
}
*/

#include <iostream>
using namespace std;

int main()
{
    int tmp, j = 1;
    int sum[11] = { 0 };
    int num[11];

    for (int i = 1; i <= 10; i++)
    {
        cin >> num[i];
        sum[i] = sum[i - 1] + num[i];
    }

    while (j <= 10)
    {
        if (sum[j] >= 100)
        {
            if (sum[j] - 100 <= 100 - sum[j - 1] || sum[j] == 100)
            {
                cout << sum[j];
                break;
            }
            else if (sum[j] - 100 > 100 - sum[j - 1])
            {
                cout << sum[j - 1];
                break;
            }

        }
        j++;
    }
    if (sum[10] < 100)
        cout << sum[10];
    return 0;
}