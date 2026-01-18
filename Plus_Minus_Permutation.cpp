#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n, x, y, val1, val2, l, cur, plus1, plus2, plusMain, minus, res;
		cin >> n >> x >> y;

		val1 = n / x;
		val2 = n / y;

		l = lcm( x, y );
		cur = n / l;

		val1 -= cur;
		val2 -= cur;

		plus1 = ( n * ( n + 1 ) ) / 2;
		plus2 = ( ( n - val1 ) * ( n - val1 + 1 ) ) / 2;
		plusMain = plus1 - plus2;

		minus = ( val2 * ( val2 + 1 ) ) / 2;	

		res = plusMain - minus;

		cout << res << "\n";
	}

	return 0;
}