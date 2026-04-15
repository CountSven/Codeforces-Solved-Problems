#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> ops( 200005, 0 );

	for ( int i = 3; i <= 200000; i++ ) {
		int cur = i, cnt = 0;
		while ( cur ) {
			cur /= 3;
			cnt++;
		}
		ops[i] = cnt;
		ops[i] += ops[i-1];
	}

	// for ( int i = 3; i <= 10; i++ ) cout << ops[i] << " ";
	// cout << "\n";

	int t;
	cin >> t;

	while ( t-- ) {
		int l, r;
		cin >> l >> r;

		long long val1 = l, val2 = l+1, tot = 0;

		while ( val1 ) {
			val1 /= 3;
			val2 *= 3;
			tot++;
		}

		while( val2 ) {
			val2 /= 3;
			tot++;
		}

		if ( l + 2 <= r ) tot += ops[r] - ops[l+1];
			
		cout << tot << "\n";
	}

	return 0;
}