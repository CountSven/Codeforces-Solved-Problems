#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long k, l1, r1, l2, r2;
		cin >> k >> l1 >> r1 >> l2 >> r2;

		long long pw = 1, cnt = 0;

		while ( pw <= 1e9 ) {
			long long curL = max( ( ( l2 + pw - 1 ) / pw ), l1 );
			long long curR = min( ( r2 / pw ), r1 );

			if ( curL <= curR ) cnt += ( curR - curL + 1 );
			pw *= k;
		}

		cout << cnt << "\n";
	}

	return 0;
}