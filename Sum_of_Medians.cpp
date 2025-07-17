#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n, k;
		cin >> n >> k;
		int sz = n*k;
		int a[sz];

		for ( int i = 1; i <= sz; i++ ) cin >> a[i];

		int mid = n / 2;

		long long sum = 0;

		for ( int i = 0; i < k; i++ ) {
			long long cur = a[sz - ( ( mid + 1 ) * i ) - mid];
			sum += cur;
		}

		cout << sum << "\n";
	}

	return 0;
}