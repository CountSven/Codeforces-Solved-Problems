#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int k;
	cin >> k;

	int cnt = 0;

	long long val = 19;

	while ( cnt != k ) {
		string s = to_string( val );
		// cout << s << " ";

		int sum = 0;

		for ( int i = 0; i < s.size(); i++ ) {
			sum += ( s[i] - '0' );
			if ( sum > 10 ) break;
		}

		if ( sum == 10 ) cnt++;

		if ( cnt != k ) val += 9;
	}
	// cout << "\n";

	cout << val << "\n";

	return 0;
}