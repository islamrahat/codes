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

void solve()
{
    int number;
    cin >> number;
    int ans;
    if(number<15) {cout << min(3,number+1) << endl; return;}
    if(number%15==0) {cout << 3+((number/15)-1)*3+1 << endl; return;}
    if(number%15==1) {cout << 3+((number/15)-1)*3+2 << endl; return;}
    if(number%15>=2) {cout << 3+((number/15)-1)*3+3 << endl; return;}
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