#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, m, k;
	cin >> n >> m >> k;

	if ( m >= n && k >= n ) cout << "Yes" << "\n";
	else cout << "No" << "\n";
	
	return 0;
}