#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s, t;
	cin >> s >> t;

	s = '1' + s;
	t = '2' + t;

	int sIdx, tIdx;

	for ( int i = s.size()-1, j = t.size()-1; i >= 0 && j >= 0; ) {
		if ( s[i] != t[j] ) {
			// cout << s[i] << " " << t[j] << "\n";
			sIdx = i;
			tIdx = j;
			break;
		}
		if ( i - 1 >= 0 ) i--;
		if ( j - 1 >= 0 ) j--;
	}

	cout << sIdx + tIdx << "\n";

	return 0;
}