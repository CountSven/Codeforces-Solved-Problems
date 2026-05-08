#include<bits/stdc++.h>
using namespace std;

const int rng = 1e7+5;
vector<bool> seive(rng, 1);
vector<int> prs;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	for ( int i = 2; i * i <= rng-5; i++ ) {
		if ( !seive[i] ) continue;
		for ( int j = i * i; j <= rng-5; j += i ) seive[j] = 0;
	}

	// for ( int i = 1; i <= 15; i++ ) cout << seive[i] << " ";
	// cout << "\n";

	for ( int i = 2; i <= rng-5; i++ ) {
		if ( seive[i] ) prs.push_back( i );
	}

	// cout << prs.size() << "\n";
	// for ( int i = 0; i < 10; i++ ) cout << prs[i] << " ";
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