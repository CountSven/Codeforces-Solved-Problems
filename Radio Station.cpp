#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    map<string, string> ipName;

    while ( n-- ) {
        string name, ip;
        cin >> name >> ip;

        ipName[ip] = name;
    }

    while ( m-- ) {
        string s, ip;
        cin >> s >> ip;

        ip.pop_back();

        cout << s << " " << ip << "; #" << ipName[ip] << endl;
    }

    return 0;
}
