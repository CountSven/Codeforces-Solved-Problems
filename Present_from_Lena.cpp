#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for ( int i = 0; i <= n; i++ ) {
		for ( int j = 0; j < n-i; j++ ) cout << "  ";
		for ( int j = 0; j < i; j++ ) cout << j << " ";
		for ( int j = i; j > 0; j-- ) cout << j << " ";
		cout << 0 << "\n";
	}

	for ( int i = n-1; i >= 0; i-- ) {
		for ( int j = 0; j < n-i; j++ ) cout << "  ";
		for ( int j = 0; j < i; j++ ) cout << j << " ";
		for ( int j = i; j > 0; j-- ) cout << j << " ";
		cout << 0 << "\n";
	}

	return 0;
}