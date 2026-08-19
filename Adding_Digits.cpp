#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, n, f = 0;
	cin >> a >> b >> n;

	a *= 10;

	for ( int i = 0; i < 10; i++ ) {
		int cur = a + i;
		if ( cur % b == 0 ) {
			a = cur;
			f = 1;
			n--;
			break;
		}
	}

	if ( !f ) cout << -1 << "\n";
	else {
		string s = to_string( a );
		while ( n-- ) s += '0';
		cout << s << "\n";
	}

	return 0;
}