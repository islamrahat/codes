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
    int number=s.size();
    if(number==2) {cout << "NO" << endl; return;}
    for(int i=0; i<number-1; i++)
    {
        if((s[i]==')' && s[i+1]==')') || (s[i]=='(' && s[i+1]=='(')) {cout << "NO" << endl; return;}
    }
    cout << "YES" << endl;
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