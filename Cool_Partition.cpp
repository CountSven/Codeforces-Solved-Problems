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
		int a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		set<int> st1, st2;
		st1.insert( a[0] );	

		int cnt = 1;

		for ( int i = 1; i < n; i++ ) {
			st2.insert( a[i] );

			if ( st1.find( a[i] ) != st1.end() ) st1.erase( a[i] );

			if ( !st1.size() ) {
				cnt++;
				st1 = st2;
				st2.clear();
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}