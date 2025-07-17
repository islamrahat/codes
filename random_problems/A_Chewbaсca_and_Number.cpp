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
    string s;
    cin >> s;
    if(s[0]=='9') {}
    else if(s[0]>='5') s[0]='9'-s[0]+48;
    for(int i=1; i<s.size(); i++)
    {
        if(s[i]>='5') s[i]='9'-s[i]+48;
    }
    cout << s << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}