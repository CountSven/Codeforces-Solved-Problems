#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, a, b, s;
	cin >> n >> a >> b >> s;

	int mn = ( ( n - 1 ) * a ) + b;
	int mx = ( ( n - 1 ) * b ) + a;

	if ( s >= mn && s <= mx ) cout << "YES" << "\n";
	else cout << "NO" << "\n";

	return 0;
}