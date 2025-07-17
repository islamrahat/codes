#include<bits/stdc++.h>
using namespace std;
typedef long long         ll;
typedef vector<int>       vi;
typedef vector<long long> vl;
#define pb push_back
#define ff                first
#define ss                second
#define yes               cout << "YES\n";
#define no                cout << "NO\n";
#define all(a)            a.begin(), a.end()
#define rall(a)           a.rbegin(), a.rend()
#define poin(x)           cout << fixed << setprecision(x);

void solve()
{
    int number, k;
    cin >> number >> k;
    vi veca(number), vecb(number);
    for(int i=0; i<number; i++) cin >> veca[i];
    for(int i=0; i<number; i++) cin >> vecb[i];
    sort(rall(veca));
    sort(all(vecb));
    ll ans=0;
    int i=number-1;
    while(k--)
    {
        if(veca[i]<vecb[i]) swap(veca[i],vecb[i]);
        i--;
    }
    for(int i=0; i<number; i++)
    {
        ans+=veca[i];
    }
    cout << ans << endl;
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