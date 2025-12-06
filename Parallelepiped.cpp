#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	long long s1, s2, s3, a, b, c, sum;
	cin >> s1 >> s2 >> s3;

	a = sqrt( ( s2 * s3 ) / s1 );
	b = sqrt( ( s1 * s3 ) / s2 );
	c = sqrt( ( s1 * s2 ) / s3 );

	sum = 4 * ( a + b + c );

	cout << sum << "\n";

	return 0;
}