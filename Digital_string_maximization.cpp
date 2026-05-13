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

		int n = s.size();

		for ( int i = n-2; i >= 0; i-- ) {
			int cur = i;
			while ( cur+1 < n && ( s[cur+1] - '0' ) - ( s[cur] - '0' ) > 1 ) {
				swap( s[cur], s[cur+1] );
				int val = ( s[cur] - '0' ) - 1;
				s[cur] = val + '0';
				cur++;
			}
		}

		cout << s << "\n";
	}

	return 0;
}