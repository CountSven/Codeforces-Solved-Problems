#include<bits/stdc++.h>
using namespace std;

const int rng = 1e7+5;
vector<int> seive(rng, 0), prs;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	for ( int i = 1; i <= rng-5; i++ ) {
		for ( int j = i; j <= rng-5; j += i ) seive[j]++;
	}

	// for ( int i = 1; i <= 15; i++ ) cout << seive[i] << " ";
	// cout << "\n";

	for ( int i = 1; i <= rng-5; i++ ) {
		if ( seive[i] == 2 ) prs.push_back( i );
	}

	// cout << prs.size() << "\n";
	// for ( int i = 1; i <= 10; i++ ) cout << prs[i] << " ";
	// cout << "\n";

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;

		long long cnt = 0;

		for ( int i = 0; i < prs.size(); i++ ) {
			if ( prs[i] > n ) break;
			cnt += ( n / prs[i] );
		}

		cout << cnt << "\n";
	}

	return 0;
}