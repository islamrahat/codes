#include<bits/stdc++.h>
using namespace std;
typedef long long         ll;
typedef vector<int>       vi;
typedef vector<long long> vl;
#define pb push_back
#define sz(a)             a.size()
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
    string number;
    cin >> number;
    reverse(all(number));
    for(int i=sz(number)-1; i>=0; i--)
    {
        if(number[i]=='0') {number.pop_back();}
        else break;
    }
    int a=100, b=100,c=100,d=100;
    for(int i=0; i<sz(number)-1; i++)
    {
        for(int j=i+1; j<sz(number); j++)
        {
            if(number[i]=='0' && number[j]=='0') {a=min(a,(j-i-1)+i);}
            if(number[i]=='5' && number[j]=='2') {b=min(b,(j-i-1)+i);}
            if(number[i]=='0' && number[j]=='5') {c=min(c,(j-i-1)+i);}
            if(number[i]=='5' && number[j]=='7') {d=min(d,(j-i-1)+i);}
        }
    }
    int ans=min(min(a,b),min(c,d));
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