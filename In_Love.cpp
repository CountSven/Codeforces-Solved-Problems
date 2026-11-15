#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int q;
	cin >> q;

	multiset<pair<int, int>> norm, rev;

	while ( q-- ) {
		char c;
		int l, r;
		cin >> c >> l >> r;

		if ( c == '+' ) {
			norm.insert( { l, r } );
			rev.insert( { r, l } );
		}
		else {
			norm.erase( norm.find( { l, r } ) );
			rev.erase( rev.find( { r, l } ) );
		}
		if ( norm.size() < 2 ) {
			cout << "NO" << "\n";
			continue;
		}
		auto [en, _] = *rev.begin();
		auto [st, __] = *norm.rbegin();
		if ( en < st ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}