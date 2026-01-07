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
		vector<int> v(n), freq( n+5, 0 );

		int req = 1;

		for ( int i = 0; i < n; i++ ) {
			cin >> v[i];

			if ( !freq[v[i]] ) freq[v[i]] = 1;
			else {
				while ( freq[req] ) req++;
				freq[req] = 1;
				v[i] = req;
			}
		}

		for (auto u : v ) cout << u << " ";
		cout << "\n";
	}

	return 0;
}