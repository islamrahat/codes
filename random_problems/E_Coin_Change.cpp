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
    ll number, k;
    cin >> number >> k;
    int ans=0;
    if(k%4==0) {ans=k/2;}
    else if(k%4==1) {ans=(k/2)+1;}
    else if(k%4==2) {ans=number-(k/2)+1;}
    else {ans=number-(k/2);}
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=3;
    while(t--)
    {
        solve();
    }

    return 0;
}