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
    int number;
    cin >> number;
    string s;
    vi vec(number);
    cin >> s;
    int ans, minimum=INT_MAX, f=0;
    for(int i=0; i<number; i++) cin >> vec[i];
    for(int i=0; i<number-1; i++)
    {
        if(s[i]=='R' && s[i+1]=='L')
        {
            ans = ((vec[i]+vec[i+1])/2)-vec[i];
            minimum=min(minimum,ans);
            f=1;
        }
    }
    if(f) {cout << minimum << endl;}
    else {cout << -1 << endl;}
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}