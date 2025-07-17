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
    string s;
    cin >> s;
    int lbracket=0, dash=0, rbracket=0; 
    for(int i=0; i<number; i++)
    {
        if(s[i]=='_') {dash++;}
        if(s[i]=='(') {lbracket++;}
        if(s[i]==')') {rbracket++;}
    }
    int ans = 2*min(lbracket,rbracket);
    ans+=dash;
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