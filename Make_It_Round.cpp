#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		ll n, m;
		cin >> n >> m;
		
		ll tmp = n, cnt2 = 0, cnt5 = 0;

		while ( tmp > 0 && tmp % 2 == 0 ) {
			tmp /= 2;
			cnt2++;
		}

		while ( tmp > 0 && tmp % 5 == 0 ) {
			tmp /= 5;
			cnt5++;
		}

		ll k = 1;

		while ( cnt2 < cnt5 && k * 2LL <= m ) {
			k *= 2LL;
			cnt2++;
		}

		while ( cnt5 < cnt2 && k * 5LL <= m ) {
			k *= 5LL;
			cnt5++;
		}

		while ( k * 10LL <= m ) k *= 10LL;

		ll cur = ( m / k ) * k;

		cout << n * cur << "\n";
	}

	return 0;
}