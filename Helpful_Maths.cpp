#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	string s;
	cin >> s;

	vector<int> v;

	for ( int i = 0; i < s.size(); i++ ){
		if ( s[i] != '+' ) v.push_back( s[i] - '0' );
	}

	sort( v.begin(), v.end() );

	int n = v.size();

	for ( int i = 0; i < n; i++ ){
		if ( i == n-1 ) cout << v[i];
		else cout << v[i] << "+";
	}

	return 0;
}