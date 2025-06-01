#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ){
		int n, f, k;
		cin >> n >> f >> k;
		vector<int> v(n);

		int tmp;

		for ( int i = 0; i < n; i++ ){
			cin >> v[i];
			if ( i == f-1 ) tmp = v[i];
		}

		sort( v.rbegin(), v.rend() );

		bool isRemvd = false;

		for ( int i = 0; i < k; i++ ){
			if ( v[i] == tmp ){
				isRemvd = true;
				break;
			}
		}

		v.erase( v.begin(), v.begin() + k );
		
		bool isRemnd = false;

		for ( auto u : v ){
			if ( u == tmp ){
				isRemnd = true;
				break;
			}
		}

		if ( ( isRemvd ) && ( isRemnd ) ) cout << "MAYBE" << "\n";
		else if ( ( isRemvd ) && ( ! ( isRemnd ) ) ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}