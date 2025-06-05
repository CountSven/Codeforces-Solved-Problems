#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, m;
		cin >> n >> m;
		string s1, s2;
		cin >> s1 >> s2;

		int cnt = 0;

		while ( s1.find( s2 ) == string::npos && cnt <= 5 ) {
			s1 += s1;
			cnt++;
		}

		if ( s1.find( s2 ) != string::npos ) cout << cnt << "\n";
		else cout << -1 << "\n";
	}

	return 0;
}