#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int a[n], b[n];

	for ( int i = 0; i < n; i++ ) b[i] = 0;

	for ( int i = 0; i < n; i++ ) {
		cin >> a[i];
		int tmp = a[i];
		b[tmp-1] = i+1;
	}

	for ( auto u : b ) cout << u << " ";
	cout << "\n";

	return 0;
}