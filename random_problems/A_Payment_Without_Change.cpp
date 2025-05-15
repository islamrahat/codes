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
    ll a, b, n, s;
    cin >> a >> b >> n >> s;
    if(b>=s) {yes;}
    else if((a*n)==s) {yes;}
    else if((a*n)<s && (a*n)+b>=s) {yes;}
    else if((int)(ceil((float)s/n)>a) && b<s){no;}
    else if(s%n<=b) {yes;}
    else {no;}
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