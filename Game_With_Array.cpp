#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, s;
	cin >> n >> s;

	if ( 2 * n > s ) cout << "NO" << "\n";
	else {
		cout << "YES" << "\n";
		for ( int i = 0; i+1 < n; i++ ) {
			s -= 2;
			cout << 2 << " ";
		}
		cout << s << "\n";
		cout << 1 << "\n";
	}

	return 0;
}