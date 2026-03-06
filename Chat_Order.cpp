#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<string> v(n);

	for ( int i = 0; i < n; i++ ) cin >> v[i];

	set<string> st;
	
	for ( int i = n-1; i >= 0; i-- ) {
		if ( st.find( v[i] ) == st.end() ) {
			cout << v[i] << "\n";
			st.insert( v[i] );
		}
	}

	return 0;
}