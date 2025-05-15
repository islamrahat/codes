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
    int number, position;
    cin >> number >> position;
    priority_queue<pair<int,int>> vec;
    multiset<pair<int,int>> sett;
    forn(number) 
    {
        int a, b; cin >> a >> b;
        vec.push({a,-b});
        sett.insert({a,b});
    }
    int a, b;
    forn(position)
    {
        a=vec.top().ff, b=-vec.top().ss;
        vec.pop();
    }
    int ans=sett.count({a,b});
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}