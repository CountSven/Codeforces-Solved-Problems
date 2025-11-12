#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	while ( 1 ) {
		int n;
		cin >> n;

		if ( n == 0 ) break;

		long long sum = 0;

		for ( int i = 1; i <= n; i++ ) {
			for ( int j = 1; j <= n; j++ ) sum += ( i * j ); 
		}

		cout << sum << "\n";
	}

	return 0;
}