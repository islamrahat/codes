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
    int number, k;
    cin >> number >> k;
    vi a(number), b(number), reserve(number);
    forn(number) cin >> a[i];
    forn(number) cin >> b[i];
    reserve=a;
    sort(all(a));
    sort(all(b));
    multiset<pair<int,int>> vec;
    forn(number)
    {
        vec.insert({a[i],b[i]});
    }
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}