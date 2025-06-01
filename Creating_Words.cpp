#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ){
		string s1, s2;
		cin >> s1 >> s2;

		char tmp = s1[0];
		s1[0] = s2[0];
		s2[0] = tmp;

		cout << s1 << " " << s2 << "\n";
	}

	return 0;
}