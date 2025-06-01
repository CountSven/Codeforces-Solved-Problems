#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ){
		int n;
		cin >> n;

		int x, y;
		cin >> x >> y;

		int div = min( x, y );

		int res = floor( n / div );

		n -= ( res * div );

		if ( n <= y ){
			while ( n != 0 ){
				n--;
				if ( n == 0 ) res++;
			}
		}

		cout << res << "\n";
	}

	return 0;
}