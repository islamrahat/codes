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
    s='S'+s;
    s=s+'E';
    int number=s.size();
    map<char,int> mp;
    for(int i=0; i<number; i++)
    {
        mp[s[i]]++;
    }
    if(mp['L']==0) {cout << 1 << endl; return;}
    if(mp['R']==0) {cout << s.size()-1 << endl; return;}
    int dists, left=0, right=0, rbuff=0, lbuff=0, diste;
    for(int i=0; i<number; i++)
    {
        if(s[i]=='R') {dists=i; break;}
    }
    for(int i=0; i<number; i++)
    {
        if(s[i]=='R') {diste=i;}
    }
    diste=s.size()-diste-1;
    for(int i=0; i<number-1; i++)
    {
        if(s[i]=='L') left++;
        else {lbuff=max(lbuff,left); left=0;}
    }
    lbuff=max(lbuff,left);
    int ans=max(lbuff+1,dists);
    ans=max(ans,diste);
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