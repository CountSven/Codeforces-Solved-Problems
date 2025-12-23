#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<string> now, prev, running;

	now.push_back("4");
	now.push_back("7");
	
	running = now;

	while ( (int)now.size() < 1000 ) {
		prev.clear();
		prev = running;
		running.clear();

		for ( int i = 0; i < prev.size(); i++ ) {
			string s = '4' + prev[i];
			now.push_back(s);
			running.push_back(s);
		}
		for ( int i = 0; i < prev.size(); i++ ) {
			string s = '7' + prev[i];
			now.push_back(s);
			running.push_back(s);
		}
	}

	// for ( auto u : now ) cout << u << "\n";

	map<string, int> mp;

	for ( int i = 0; i < (int)now.size(); i++ ) mp[now[i]] = i+1;

	string n;
	cin >> n;
	cout << mp[n] << "\n";

	return 0;
}