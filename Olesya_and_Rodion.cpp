#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, t;
	cin >> n >> t;

	if ( n == 1 && t == 10 ) cout << -1  << "\n";
	else {
		string s = "";

		if ( t == 10 ) {
			s += "10";
			n -= 2;
		}
		else {
			s += ( t + '0');
			n--;
		}

		while ( n > 0 ) {
			s += '0';
			n--;
		}

		cout << s << "\n";
	}

	return 0;
}