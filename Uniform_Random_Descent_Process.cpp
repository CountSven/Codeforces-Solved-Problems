#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	long double a[100000];
	a[0] = 0.00;

	for ( int i = 1; i <= 100000; i++ ) a[i] = ( (long double)1 / i ) + a[i-1];

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;
		cout << fixed << setprecision(15) << a[n] << "\n";
	}

	return 0;
}