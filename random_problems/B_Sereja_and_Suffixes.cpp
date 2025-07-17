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
    int number, q;
    cin >> number >> q;
    vi vec(number), count(number);
    forn(number) cin >> vec[i];
    set<int> s;
    for(int i=number-1; i>=0; i--)
    {
        s.insert(vec[i]);
        count[i]=s.size();
    }
    while(q--)
    {
        int a; cin >> a;
        cout << count[a-1] << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}