#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	int multiple = n - k;

	string s;
	int itr = 0;

	for ( char i = 'a'; i <= 'z'; i++) {
		s += i;
		itr++;
		if ( itr == k ) break;
	}

	while ( multiple-- || s.size() != n ) {
		s += 'a';
		if ( s.size() == n ) break;
		s += 'b';
		if ( s.size() == n ) break;
	}

	cout << s << "\n";

	return 0;
}