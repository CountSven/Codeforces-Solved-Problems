#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;
	int a[n];

	long long sum = 0;

	for ( int i = 0; i < n; i++ ) {
		cin >> a[i];

		int cur = ceil( ( 1.0 ) * a[i] / k );

		sum += cur;
	}

	cout << sum << "\n";

	return 0;
}