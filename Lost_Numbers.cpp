#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a[] = { 4, 8, 15, 16, 23, 42 };

	map<int, pair<int, int>> mp;

	for ( int i = 0; i+1 < 6; i++ ) {
		for ( int j = i+1; j < 6; j++ ) {
			mp[a[i] * a[j]] = { a[i], a[j] };
		}
	}

	// for ( auto [x, y] : mp ) {
	// 	auto [f, s] = y;
	// 	cout << x << " -> " << f << " * " << s << "\n";
	// }

	map<int, int> m1, m2, m3, m4, m5, m6;

	int val, i, j;

	cout << "? 1 2" << endl;
	cin >> val;

	i = mp[val].first;
	j = mp[val].second;

	m1[i]++;
	m1[j]++;
	m2[i]++;
	m2[j]++;

	cout << "? 2 3" << endl;
	cin >> val;

	i = mp[val].first;
	j = mp[val].second;

	m2[i]++;
	m2[j]++;
	m3[i]++;
	m3[j]++;

	vector<int> res( 7 );

	int mx = 0, v;

	for ( auto [x, y] : m2 ) {
		if ( y > mx ) {
			mx = y;
			v = x;
		}
	}

	res[2] = v;

	m1.erase( v );
	m3.erase( v );

	for ( auto [x, y] : m1 ) v = x;

	res[1] = v;

	for ( auto [x, y] : m3 ) v = x;

	res[3] = v;

	cout << "? 4 5" << endl;
	cin >> val;

	i = mp[val].first;
	j = mp[val].second;

	m4[i]++;
	m4[j]++;
	m5[i]++;
	m5[j]++;

	cout << "? 5 6" << endl;
	cin >> val;

	i = mp[val].first;
	j = mp[val].second;

	m5[i]++;
	m5[j]++;
	m6[i]++;
	m6[j]++;

	mx = 0;

	for ( auto [x, y] : m5 ) {
		if ( y > mx ) {
			mx = y;
			v = x;
		}
	}

	res[5] = v;

	m4.erase( v );
	m6.erase( v );

	for ( auto [x, y] : m4 ) v = x;

	res[4] = v;

	for ( auto [x, y] : m6 ) v = x;

	res[6] = v;
	
	string s = "!";

	for ( int i = 1; i <= 6; i++ ) s += " " + to_string( res[i] );
	
	cout << s << endl;

	return 0;
}