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
    int number; cin >> number;
    vi p(number), a(number), b(number);
    forn(number) cin >> p[i];
    forn(number) cin >> a[i];
    forn(number) cin >> b[i];

    int m; cin >> m;
    priority_queue<int, vi, greater<int>> pque[5][5];
    forn(number)
    {
        pque[a[i]][b[i]].push(p[i]);
    }
    while(m--)
    {
        int color, ans=INT_MAX; cin >> color;
        int f, b;
        for(int i=1; i<=3; i++)
        {
            if(!pque[i][color].empty() && pque[i][color].top()<ans)
            {
                ans=pque[i][color].top();
                f=i, b=color;
            }
        }
        for(int i=1; i<=3; i++)
        {
            if(!pque[color][i].empty() && pque[color][i].top()<ans)
            {
                ans=pque[color][i].top();
                f=color, b=i;
            }
        }
        if(ans==INT_MAX) ans=-1;
        else
        {
            pque[f][b].pop();
        }
        cout << ans << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}