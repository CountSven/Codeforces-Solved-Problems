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
		long long size = n * 2;
		vector<long long> v(size);

		for ( int i = 0; i < size; i++ ) cin >> v[i];

		sort( v.begin(), v.end() );
		
		long long diff1 = v[ ( size / 2 ) ];
		long long diff2 = v[ ( size / 2 ) - 1 ];
		long long diff = diff1 - diff2;

		// cout << diff1 << "\n";
		// cout << diff2 << "\n";
		cout << diff << "\n";
	}

	return 0;
}