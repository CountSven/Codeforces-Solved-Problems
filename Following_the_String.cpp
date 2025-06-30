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

		vector<int> v(n), alph(26);

		string s;

		for ( int i = 0; i < n; i++ ) {
			cin >> v[i];
			for ( int j = 0; j < 26; j++ ) {
				if ( alph[j] == v[i] ) {
					s += 'a' + j;
					alph[j]++;
					break;
				}
			}
		}

		cout << s << "\n";
	}

	return 0;
}