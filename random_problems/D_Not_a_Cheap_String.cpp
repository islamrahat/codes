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
    string s;
    cin >> s;
    int limit, number=s.size();
    cin >> limit;
    ll sum=0;
    for(int i=0; i<number; i++)
    {
        sum+=((s[i]-96));
    }
    if(sum<=limit) {cout << s << endl; return;}
    string n=s;
    sort(rall(n));
    map<char,int> cmap;
    for(int i=0; i<number && sum>limit; i++)
    {
        if(sum>limit)
        {
            cmap[n[i]]++;
            sum-=n[i]-96;
        }
    }
    for(int i=0; i<s.length(); i++)
    {
        if(cmap[s[i]]>0)
        {
            cmap[s[i]]--;
            continue;
        }
        cout << s[i];
    }
    cout << endl;
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