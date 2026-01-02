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
		vector<int> v(n), s(n);

		for ( int i = 0; i < n; i++ ) {
			cin >> v[i];
			s[i] = v[i];
		}

		sort( s.begin(), s.end() );

		map<int, int> mp;

		int l = 0, r = 0;

		long long sum = 0;
		
		while ( l < n ) {
		    if ( l == r ) {
		    	sum += s[r];
		    	r++;
		    }

		    while ( sum >= s[r] && r < n ) {
		    	sum += s[r];
		    	r++;
		    }

		    mp[s[l]] = r - 1;
		    l++;
		}

		for ( int i = 0; i < n; i++ ) cout << mp[v[i]] << " ";
		cout << "\n";
	}

	return 0;
}