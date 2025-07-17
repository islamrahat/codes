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
    int number, k;
    cin >> number >> k;
    string s;
    cin >> s;
    vi count(150);
    for(int i=0; i<number; i++) {count[s[i]]++;}
    vector<pair<int,int>> pairs(30);
    int avg=0, ans=0;
    for(int i=0; i<150; i++)
    {
        if(count[i]>0)
        {
            if(i<='Z' && i>='A') {pairs[i-'A'].ff=count[i], pairs[i-'A'].ss=count[i+32];}
            if(i<='z' && i>='a') {pairs[i-'a'].ss=count[i-32], pairs[i-'a'].ff=count[i];}
        }
    }
    for(int i=0; i<26; i++)
    {
        if((pairs[i].ff>0 && pairs[i].ss>0))
        {
            ans+=min(pairs[i].ff,pairs[i].ss);
            avg+=((pairs[i].ff+pairs[i].ss)/2-min(pairs[i].ff,pairs[i].ss));
        }
        else if(pairs[i].ff>=2 || pairs[i].ss>=2)
        {
            avg+=((pairs[i].ff+pairs[i].ss)/2);
        }
    }
    ans+=(min(k,avg));
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