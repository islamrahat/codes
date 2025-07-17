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
    vi vec(number);
    for(int i=0; i<number; i++) cin >> vec[i];
    vi even, odd;
    for(int i=0; i<number; i++)
    {
        if(vec[i]%2==0) even.pb(vec[i]);
        else odd.pb(vec[i]);
    }
    vi buffeven=even, buffodd=odd;
    sort(all(even));
    sort(all(odd));
    if(even!=buffeven || odd!=buffodd) cout << "No" << endl;
    else cout << "Yes" << endl;
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