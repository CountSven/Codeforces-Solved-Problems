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
		vector<int> v(n), r;

		long long cnt = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> v[i];
			if ( v[i] > 0 ) {
				r.push_back( v[i] );
				sort( r.begin(), r.end() );
			}
			else {
				if ( r.size() > 0 ) {
					cnt += r.back();
					r.pop_back();
				}
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}