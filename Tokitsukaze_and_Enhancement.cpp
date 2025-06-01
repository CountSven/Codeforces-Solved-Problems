#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n;
	cin >> n;

	if ( n % 4 == 1 ) cout << 0 << " A" << "\n";
	else if ( n % 4 == 2 ) cout << 1 << " B" << "\n";
	else if ( n % 4 == 3 ) cout << 2 << " A" << "\n";
	else cout << 1 << " A" << "\n";
	
	return 0;
}