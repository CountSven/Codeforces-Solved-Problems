#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;
		vector<long long> v(n);

		for ( int i = 0; i < n; i++ ) cin >> v[i];

		sort( v.begin(), v.end() );

		long long maxProd = LLONG_MIN;

		for ( int i = 0; i <= 5; i++ ) {
			long long prod = 1;

			for ( int j = 0; j < i; j++ ) prod *= v[j];
			for ( int j = i; j < 5; j++ ) prod *= v[n-5+j];

			maxProd = max( maxProd, prod );
		}

		cout << maxProd << "\n";
	}

	return 0;
}