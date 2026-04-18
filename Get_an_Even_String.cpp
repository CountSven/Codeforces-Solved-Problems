#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		string s;
		cin >> s;

		int cnt = 0;

		set<char> st;

		for ( int i = 0; i < s.size(); i++ ) {
			if ( st.find( s[i] ) != st.end() ) {
				cnt += (int)st.size() - 1;
				st.clear();
			}
			else st.insert( s[i] );
		}

		cnt += (int)st.size();

		cout << cnt << "\n";
	}

	return 0;
}