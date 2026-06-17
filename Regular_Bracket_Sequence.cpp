#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	vector<int> v;
	set<int> st;

	for ( int i = 0; i < s.size(); i++ ) {
		if ( s[i] == '(' ) v.push_back( i );
		else st.insert( i );
	}

	reverse( v.begin(), v.end() );

	int cnt = 0;

	for ( int i = 0; i < v.size(); i++ ) {
		auto cur = st.upper_bound( v[i] );
		if ( cur == st.end() ) continue;
		else {
			st.erase( *cur );
			cnt += 2;
		}
	}

	cout << cnt << "\n";

	return 0;
}