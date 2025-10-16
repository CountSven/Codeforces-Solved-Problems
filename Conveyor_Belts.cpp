#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, x1, y1, x2, y2;
		cin >> n >> x1 >> y1 >> x2 >> y2;

		int ax = min(x1, n + 1 - x1);
        int ay = min(y1, n + 1 - y1);
        int a = min(ax, ay);
        
        int bx = min(x2, n + 1 - x2);
        int by = min(y2, n + 1 - y2);
        int b = min(bx, by);

        cout << abs( a - b ) << "\n";
	}

	return 0;
}