#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;

	int mn1 = ( k * l ) / nl;
	int mn2 = c * d;
	int mn3 = p / np;

	int resMn1 = min( mn1, mn2 );
	int resMn2 = min( mn3, resMn1 ) / n;

	cout << resMn2 << "\n";

	return 0;
}