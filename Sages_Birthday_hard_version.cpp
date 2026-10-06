#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int a[n], b[n];

	multiset<int> mst;

	for ( int i = 0; i < n; i++ ) {
		cin >> a[i];
		mst.insert( a[i] );
	}

	sort( a, a+n );
	reverse( a, a+n );

	for ( int i = 0, j = 0; i < n; i += 2, j++ ) {
		b[i] = a[j];
		mst.erase( mst.find( a[j] ) );
	}

	for ( int i = 1; i < n; i += 2 ) {
		int val = b[i-1];
		if ( i+1 < n ) val = b[i+1];
		auto it = mst.lower_bound( val );
		if ( it == mst.begin() ) {
			b[i] = *mst.rbegin();
		}
		else {
			it--;
			b[i] = *it;
		}
		mst.erase( mst.find( b[i] ) );
	}

	int cnt = 0;
	
	for ( int i = 1; i+1 < n; i++ )	{
		if ( b[i] < b[i-1] && b[i] < b[i+1] ) cnt++; 
	}

	cout << cnt << "\n";
	for ( int i = 0; i < n; i++ ) cout << b[i] << " \n"[i + 1 == n];

	return 0;
}