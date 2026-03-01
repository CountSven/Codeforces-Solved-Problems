#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> v(n), freq( 3005, 0 );

	for ( int i = 0; i < n; i++ ) {
		cin >> v[i];
		freq[v[i]] = 1;
	}

	for ( int i = 1; i <= 3005; i++ ) {
		if ( !freq[i] ) {
			cout << i << "\n";
			break;
		}
	}

	return 0;
}