#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	string tmp = s;

	reverse( tmp.begin(), tmp.end() );

	string cur = s + tmp;

	cout << cur << "\n";

	return 0;
}