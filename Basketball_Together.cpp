#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, d;
	cin >> n >> d;
	deque<int> dq(n);

	for ( int i = 0; i < n; i++ ) cin >> dq[i];

	sort( dq.rbegin(), dq.rend() );

	// for ( auto u : dq ) cout << u << " ";
	// cout << "\n";

	int cnt = 0;

	while ( dq.size() > 0 ) {
		int cur = dq.front();
		dq.pop_front();
		long long tot = cur;

		while ( dq.size() > 0 && tot <= d ) {
			tot += cur;
			dq.pop_back();
		}

		if ( tot > d ) cnt++;
	}

	cout << cnt << "\n";

	return 0;
}