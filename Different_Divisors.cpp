#include<bits/stdc++.h>
using namespace std;

bool check_prime(int n)
{
    for (int i = 2; i*i<=n; i++) if (n%i==0) return false;
    return true;
}
 
vector<int> primes;
 
void solve() {
    int d;
    cin >> d;
    
    int res = 1;
    for (auto it: primes)
    {
        if (it>=d+1)
        {
            res = it; break;
        }
    }
    for (auto it: primes)
    {
        if (it>=d+res)
        {
            res = res*it; break;
        }
    }
    cout<<res<<endl;
 
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
 
    for (int i = 2; i<=50000; i++) if (check_prime(i)) primes.push_back(i);
 
    int t;
    cin>>t;
    while (t--) solve();
}