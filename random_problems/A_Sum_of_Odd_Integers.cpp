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
#define PI                acos(-1.0)
#define poin(x)           cout << fixed << setprecision(x);

bool isSameParity(ll a, ll b)
{
    if(a&1 && b&1) return true;
    if(!(a&1) && !(b&1)) return true;
    return false;
}

void solve()
{
    ll number, k;
    cin >> number >> k;
    if(k*k>number) {no; return;}
    if(isSameParity(number,k)) {yes; return;}
    no;
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