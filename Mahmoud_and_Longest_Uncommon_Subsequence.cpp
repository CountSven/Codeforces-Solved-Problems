#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string a, b;
	cin >> a >> b;

	if ( a == b ) cout << -1 << "\n";
	else if ( a.size() > b.size() ) cout << a.size() << "\n";
	else cout << b.size() << "\n";

	return 0;
}