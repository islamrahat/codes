#include<bits/stdc++.h>
using namespace std;
typedef long long         ll;
typedef vector<int>       vi;
typedef vector<long long> vl;
#define pb push_back
#define yes               cout << "YES\n";
#define no                cout << "NO\n";
#define all(a)            a.begin(), a.end()
#define rall(a)           a.rbegin(), a.rend()
#define poin(x)           cout << fixed << setprecision(x);

void solve()
{
    int n;
    string t;
    cin >> n >> t;
    if(n<t.size()) {cout << -1 << endl; return;}
    if(n==t.size()) {cout << t << endl; return;}
    if(t=="10")
    {
        for(int i=0; i<n-2; i++) t+='0';
    }
    else
    {
        for(int i=0; i<n-1; i++) t+='0';
    }
    cout << t << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}