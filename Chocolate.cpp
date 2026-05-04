#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> v;

	for ( int i = 0; i < n; i++ ) {
		int x;
		cin >> x;
		if ( x ) v.push_back( i + 1 );
	}

	long long res = 1;

	for ( int i = 1; i < v.size(); i++ ) res *= ( 1LL * ( v[i] - v[i-1] ) );

	if ( !v.size() ) res = 0;
	
	cout << res << "\n";	

	return 0;
}