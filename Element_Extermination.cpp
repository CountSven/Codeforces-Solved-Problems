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
		vector<int> v(n), stored;

		for ( int i = 0; i < n; i++ ) cin >> v[i];

		stored.push_back( v.back() );
		v.pop_back();

		while ( v.size() ) {
			if ( v.back() > stored.back() ) {
				stored.push_back( v.back() );
				v.pop_back();
			}
			else {
				if ( stored.size() >= 2 ) stored.pop_back();
				else v.pop_back();
			}
		}

		if ( stored.size() == 1 ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}