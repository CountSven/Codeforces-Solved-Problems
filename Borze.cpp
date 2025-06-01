#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	string s;
	cin >> s;

	reverse( s.begin(), s.end() );

	while ( s.size() != 0 ){
		if ( *( s.end() - 1 ) == '-' && *( s.end() - 2 ) == '-' ){
			cout << 2;
			s.pop_back();
			s.pop_back();
		}
		else if ( *( s.end() - 1 ) == '-' && *( s.end() - 2 ) == '.' ){
			cout << 1;
			s.pop_back();
			s.pop_back();
		}
		else{
			cout << 0;
			s.pop_back();
		}
	}

	cout << "\n";

	return 0;
}