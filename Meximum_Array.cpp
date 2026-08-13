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
		vector<int> a(n), freq( n+1, 0 ), b;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			freq[a[i]]++;
		}

		set<int> cur, removed;

		for ( int i = 0; i <= n; i++ ) cur.insert( i );

		for ( int i = 0; i < n; i++ ) {
			freq[a[i]]--;
			cur.erase( a[i] );
			removed.insert( a[i] );
			
			int val = *cur.begin();
			if ( !freq[val] ) {
				b.push_back( val );
				for ( auto u : removed ) cur.insert( u );
				removed.clear();		
			}
		}

		cout << b.size() << "\n";
		for ( int i = 0; i < b.size(); i++ ) cout << b[i] << " \n"[i + 1 == b.size()];
	} 

	return 0;
}