#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int q;
	cin >> q;

	while ( q-- ) {
		string s, t;
		cin >> s >> t;

		int n = s.size(), m = t.size();

		int i = n-1, j = m-1;

		while ( i >= 0 && j >= 0 ) {
			if ( s[i] == t[j] ) {
				i--;
				j--;
			}
			else i -= 2;
		}

		if ( j == -1 ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	} 

	return 0;
}