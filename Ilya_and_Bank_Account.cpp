#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int tmp1 = n, tmp2 = n;
	int n1, lDig, n2;

	n1 = tmp1 / 10;
	lDig = abs( tmp1 % 10 );
		
	string s = to_string( tmp2 );
	s.pop_back();
	s.pop_back();

	s += ( lDig + '0' );

	n2 = stoi( s );

	// cout << n << "\n";
	// cout << n1 << "\n";
	// cout << n2 << "\n";

	int mx = max( n, max( n1, n2 ) );

	cout << mx << "\n";

	return 0;
}