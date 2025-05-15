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
    int a, b; cin >> a >> b;
    int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    set<pair<int, int>> st1, st2;
    for(int j = 0; j < 4; j++)
    {
        st1.insert({x1+dx[j]*a, y1+dy[j]*b});
        st2.insert({x2+dx[j]*a, y2+dy[j]*b});
        st1.insert({x1+dx[j]*b, y1+dy[j]*a});
        st2.insert({x2+dx[j]*b, y2+dy[j]*a});
    }
    int ans = 0;
    for(auto x : st1)
        if(st2.find(x) != st2.end())
            ans++;
    cout << ans << '\n';
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