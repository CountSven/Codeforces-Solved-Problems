#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		cin >> n >> k;
		int a[n];

		int cntEv = 0, mnCnt = INT_MAX;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			if ( a[i] % 2 == 0 ) cntEv++;
		}

		if ( k == 4 ) {
			if ( cntEv == 0 ) mnCnt = 2;
			else if ( cntEv == 1 ) mnCnt = 1;
			else mnCnt = 0;
		}

		for ( int i = 0; i < n; i++ ) {
			int cur = a[i] % k;
			if ( cur == 0 ) mnCnt = 0;

			mnCnt = min( mnCnt, k - cur );
		}

		cout << mnCnt << "\n";
	}

	return 0;
}