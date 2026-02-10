#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> v( n+2, 0 );

	for ( int i = 2; i <= n+1; i++ ) {
		for ( int j = i; j <= n+1; j += i ) {
			if ( j == i && !v[j] ) v[j] = 1;
			else v[j] = 2;
		}
	}

	cout << *max_element( v.begin(), v.end() ) << "\n";
	for ( int i = 2; i <= n+1; i++ ) cout << v[i] << " ";
	cout << "\n";

	return 0;
}