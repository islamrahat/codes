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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll prod1=a*d, prod2=b*c;
    if(prod1==prod2) {cout << 0 << endl; return;}
    if((prod1!=0 && prod2%prod1==0)) {cout << 1 << endl; return;}
    if((prod2!=0 && prod1%prod2==0)) {cout << 1 << endl; return;}
    cout << 2 << endl;
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