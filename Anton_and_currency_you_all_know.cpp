#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	int n = s.size(), l = -1;

	for ( int i = n-1; i >= 0; i-- ) {
		int cur = s[i] - '0';
		if ( cur % 2 == 0 ) {
			if ( l == -1 ) l = i;
			else if ( cur < ( s[n-1] - '0' ) ) l = i;
		}
	}

	if ( l == -1 ) cout << l << "\n";
	else {
		swap( s[l], s[n-1] );
		cout << s << "\n";
	}

	return 0;
}