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
    ll number;
    cin >> number;
    vl vec(1000001);
    for(ll i=0; i<1000001; i++)
    {
        vec[i]=(i+1)*(i+2);
        vec[i]+=(i*(i+1))/2;
    }
    int ans=0;
    while(number>1)
    {
        int buff;
        for(int i=1; i<1000001; i++)
        {
            if(vec[i]>number) {ans++; buff=vec[i-1];break;}
        }
        number-=buff;
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