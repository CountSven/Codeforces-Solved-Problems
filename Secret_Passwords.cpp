#include<bits/stdc++.h>
using namespace std;

vector<int> par(26), sz(26, 1);

int get( int v )
{
	if ( v == par[v] ) return v;
	else return par[v] = get( par[v] );
}

void unite( int a, int b )
{
	a = get( a );
	b = get( b );
	if ( a != b ) {
		if ( sz[a] < sz[b] ) swap( a, b );
		par[b] = a;
		sz[a] += sz[b];
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	for ( int i = 0; i < 26; i++ ) par[i] = i;

	int n;
	cin >> n;

	set<char> st;

	while ( n-- ) {
		string s;
		cin >> s;

		int last = -1;

		for ( char c : s ) {
			st.insert( c );
			if ( last != -1 ) unite( last, c - 'a' );
			last = c - 'a';
		}
	}

	set<int> vals;

	for ( auto c : st ) {
		int cur = get( c - 'a' );
		vals.insert( cur );
	}

	cout << vals.size() << "\n";

	return 0;
}