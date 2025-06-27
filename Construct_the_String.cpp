#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, a, b;
		cin >> n >> a >> b;

		string s;

		int cnt = 0;

		if ( a == b ) {
			while ( s.size() != n ) {
				for ( char c = 'a'; c <= 'z'; c++ ) {
					s += c;
					cnt++;
					if ( cnt == n ) break;
				}
			}
		}
		else {
			for ( char c = 'a'; c <= 'z'; c++ ) {
				s += c;
				cnt++;
				if ( cnt == b ) break;
			}

			int moreAdd = a - b;

			while ( moreAdd-- ) s += s.back();

			while ( s.size() != n ) {
				string r = s;

				for ( int i = 0; i < r.size(); i++ ) {
					s += r[i];
					if ( s.size() == n ) break;
				}
			}
		}

		cout << s << "\n";
	}

	return 0;
}