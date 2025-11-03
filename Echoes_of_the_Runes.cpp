#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> v(n), s;

	for ( int i = 0; i < n; i++ ) cin >> v[i];

	s = v;

	sort( s.begin(), s.end() );

	int f = 0;

	for ( int i = 0; i < n; i++ ) {
		if ( v[i] != s[i] ) f++;
	}

	if ( f == 0 || f == 2 ) cout << "Sorted" << "\n";
	else cout << "Failed" << "\n";

	return 0;
}