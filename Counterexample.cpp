#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	long long l, r;
	cin >> l >> r;

	/*if ( r - l <= 1 || ( r - l == 2 && l % 2 ) ) cout << -1 << "\n";
	else {
		if ( l % 2 ) cout << l+1 << " " << l+2 << " " << l+3 << "\n";
		else cout << l << " " << l+1 << " " << l+2 << "\n";
	}*/

	if ( l % 2 ) l++;

	if ( r - l <= 1 ) cout << -1 << "\n";
	else cout << l << " " << l+1 << " " << l+2 << "\n";

	return 0;
}