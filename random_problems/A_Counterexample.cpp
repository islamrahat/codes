#include<bits/stdc++.h>
using namespace std;
typedef long long         ll;
typedef vector<int>       vi;
typedef vector<long long> vl;
#define pb push_back
#define ff                first
#define ss                second
#define forn(n)           for(int i=0; i<n; i++)
#define forc(cn,abc)      ((cn).find(abc)!=(cn).end())
#define yes               cout << "YES\n";
#define no                cout << "NO\n";
#define all(a)            a.begin(), a.end()
#define rall(a)           a.rbegin(), a.rend()
#define poin(x)           cout << fixed << setprecision(x);

void solve()
{
    ll a, b=0, c;
    cin >> a >> c;
    if(c-a<2) {cout << -1 << endl; return;}
    for(ll i=a; i<c; i++)
    {
        for(ll j=i+1; j<=c; j++)
        {
            if(gcd(i,j)!=1)
            {
                b=j;
                cout << a << " " << b-1 << " " << b << endl;
                return;
            }
        }
        
    }
    cout << -1 << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}