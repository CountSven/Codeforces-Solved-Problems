#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, q;
	cin >> n >> q;
	vector<int> v(n+1);

	map<int, int> mp;

	long long sum = 0;

	for ( int i = 1; i <= n; i++ ) {
		cin >> v[i];
		sum += v[i];
		mp[i] = v[i];
	}

	int last = 0;

	while ( q-- ) {
		int tp;
		cin >> tp;

		if ( tp == 1 ) {
			int idx, val;
			cin >> idx >> val;

			if ( !last ) {
				sum -= mp[idx];
				sum += val;
				mp[idx] = val;
			}
			else {
				if ( mp.find( idx ) != mp.end() ) {
					sum -= mp[idx];
					sum += val;
					mp[idx] = val;
				}
				else {
					sum -= last;
					sum += val;
					mp[idx] = val;
				}
			}
		}
		else {
			int val;
			cin >> val;

			sum = 1LL * n * val;

			last = val;

			mp.clear();
		}

		cout << sum << "\n";
	}

	return 0;
}