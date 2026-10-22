#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MOD = 1e9+7;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	ll n;
	cin >> n;

	ll fact = 1, pow = 1;

	for ( int i = 1; i <= n; i++ ) fact = ( fact * i ) % MOD;

	for ( int i = 1; i <= n-1; i++ ) pow = ( pow * 2 ) % MOD;

	cout << ( fact - pow + MOD ) % MOD << "\n";

	return 0;
}