#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	int mn = min( n, m );

	if ( mn % 2 ) cout << "Akshat" << "\n";
	else cout << "Malvika" << "\n";

	return 0;
}