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
    vi vec(number+5);
    for(int i=1; i<=number; i++) cin >> vec[i];
    if((2*vec[1]-vec[2])<0 || (2*vec[1]-vec[2])%(number+1)!=0) {no; return;}
    ll x2 = (2*vec[1]-vec[2])/(number+1);
    ll x1 = vec[1]-number*x2;
    for(int i=1; i<=number; i++)
    {
        if(vec[i]-x1*i-x2*(number-i+1)!=0) {no; return;}
    }
    if(x1<0 || x2<0) {no; return;}
    yes;
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