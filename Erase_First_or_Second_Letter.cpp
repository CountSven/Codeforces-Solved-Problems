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
		string s;
		cin >> n >> s;

		set<char> st;

		long long res = 0;

		for ( int i = 0; i < n; i++ ) {
			st.insert( s[i] );
			res += (int)st.size();
		}

		cout << res << "\n";
	}

	return 0;
}