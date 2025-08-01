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

		long long val;

		if ( n <= k ) val = ceil( ( 1.0 ) * k / n );
		else {
			val = ceil( ( 1.0 ) * n / k );
			
			k *= val;

			val = ceil( ( 1.0 ) * k / n );
		}

		cout << val << "\n";
	}

	return 0;
}