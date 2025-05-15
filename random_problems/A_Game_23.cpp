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
    int n, m;
    cin >> n >> m;
    int ans=-1;
    if(m%n==0)
    {
        ans=0;
        int div=m/n;
        while(div%2==0)
        {
            div/=2;
            ans++;
        }
        while(div%3==0)
        {
            div/=3;
            ans++;
        }
        if(div!=1) {ans=-1;}
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}