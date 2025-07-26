#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	int cur1 = a + b + c;
	int cur2 = a * b * c;
	int cur3 = ( a + b ) * c;
	int cur4 = a + ( b * c );
	int cur5 = ( a * b ) + c;
	int cur6 = a * ( b + c );

	vector<int> v;
	v.push_back( cur1 );
	v.push_back( cur2 );
	v.push_back( cur3 );
	v.push_back( cur4 );
	v.push_back( cur5 );
	v.push_back( cur6 );

	cout << *max_element( v.begin(), v.end() );

	return 0;
}