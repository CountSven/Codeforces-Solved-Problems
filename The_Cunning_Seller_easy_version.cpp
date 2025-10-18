#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n;
		cin >> n;

		long long cost = 0;

		while ( n ) {
			long long cur = 1, pow = 0;

			while ( cur * 3 <= n ) {
				cur *= 3;
				pow++;
			}

			cost += cur * 3 + cur / 3 * pow;
			n -= cur;
		}		

		cout << cost << "\n";
	}

	return 0;
}