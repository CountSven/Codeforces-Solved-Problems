#include<bits/stdc++.h>
using namespace std;

int main()  {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)  {
        int n, r, b;
        cin >> n >> r >> b;
        n = r/(b+1);
        r -= n*(b+1);
        for(int j = 0; j < n; j++)  {
                cout << "R";
        }
        for(int i = 0; i < b; i++)  {
            if(r > 0)   {
                cout << "R";
                r--;
            }
            cout << "B";
            for(int j = 0; j < n; j++)  {
                cout << "R";
            }
        }
        cout << "\n";
    }
    return 0;
}