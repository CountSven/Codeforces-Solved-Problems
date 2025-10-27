#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int x1, x2, x3, x4, h;
	cin >> x1 >> x2 >> x3 >> x4 >> h;

	int a = min( x2, x4 );
	int b = max( x1, x3 );

	long long diff = a - b;

	long long area = max( 0LL, diff ) * h;

	cout << area << "\n";

	return 0;
}