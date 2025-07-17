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
    string s;
    int number, k;
    cin >> number >> k;
    cin >> s;
    int cero=0, uno=0;
    for(int i=0; i<number; i++)
    {
        if(s[i]=='0') cero++;
        else uno++;
    }
    int buffer=number/2;
    int bad=buffer-k;
    if((bad>=0 && bad<=buffer) && (bad<=cero && bad<=uno))
    {
        if((cero-bad)%2==0 && (uno-bad)%2==0) {cout << "YES" << endl; return;}
    }
    cout << "NO" << endl;
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