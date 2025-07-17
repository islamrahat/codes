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
    string fname, lname;
    cin >> fname >> lname;
    string s1, s2;
    s1.pb(fname[0]), s2.pb(lname[0]);
    for(int i=1; i<fname.size(); i++)
    {
        if(fname[i]<lname[0]) {s1.pb(fname[i]);}
        else break;
    }
    s1+=s2;
    cout << s1 << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}