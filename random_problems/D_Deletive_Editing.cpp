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
    string s, target;
    cin >> s >> target;
    for(int i=0; i<s.size(); i++)
    {
        if(find(all(target),s[i])!=target.end()) {}
        else
        {
            s.erase(s.begin()+i);
            i=0;
        }
    }
    reverse(all(s));
    reverse(all(target));
    int tsize=target.size();
    cout << s << " " << target << endl;
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