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
    cin >> s;
    int number=s.size();
    if(s[number-1]=='F') {cout << "float" << endl;}
    else if(s[number-1]=='L') {cout << "long double" << endl;}
    else if(find(all(s),'e')!=s.end() && s[number-2]!='e') {cout << "double" << endl;}
    else if(find(all(s),'e')!=s.end()) {cout << "float" << endl;}
    else {cout << "other" << endl;}
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