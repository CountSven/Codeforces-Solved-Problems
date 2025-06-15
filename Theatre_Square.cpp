#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m, a;
	cin >> n >> m >> a;

	long long fstSideOne = ceil( ( n * 1.0 ) / a );
	long long fstSidetwo = ceil( ( m * 1.0 ) / a );

	long long fstSideMain = fstSideOne * fstSidetwo;

	cout << fstSideMain << "\n";

	return 0;
}