#include<bits/stdc++.h>
using namespace std;

const double pi = acos( -1 );

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;

		double angle = pi / ( 2.0 * n );
		double res = 1.0 / tan( angle );

		cout << fixed << setprecision(12) << res << "\n";
	}  

	return 0;
}