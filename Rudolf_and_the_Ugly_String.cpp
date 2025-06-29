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
		cin >> n;
		string s;
		cin >> s;

		int cnt = 0;

		for ( int i = 0; i < n; i++ ) {
			if ( i+2 < n && s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p' ) {
				cnt++;
				s[i+2] = 'z';
			}
			else if ( i+2 < n && s[i] == 'p' && s[i+1] == 'i' && s[i+2] == 'e' ) {
				cnt++;
				s[i+2] = 'z';
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}