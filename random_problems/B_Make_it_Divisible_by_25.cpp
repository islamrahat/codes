#include<bits/stdc++.h>
using namespace std;
typedef long long         ll;
typedef vector<int>       vi;
typedef vector<long long> vl;
#define pb push_back
#define ff                first
#define ss                second
#define forn(n)           for(int i=0; i<n; i++)
#define forc(cn,abc)      ((cn).find(abc)!=(cn).end())
#define yes               cout << "YES\n";
#define no                cout << "NO\n";
#define all(a)            a.begin(), a.end()
#define rall(a)           a.rbegin(), a.rend()
#define poin(x)           cout << fixed << setprecision(x);

void solve()
{
    string s;
    cin >> s;
    reverse(all(s));
    int number=s.size();
    int ans=0, k=0;
    for(int i=0; i<number-1; i++)
    {
        for(int j=i+1; j<number; j++)
        {
            if((s[i]=='0' && s[j]=='0') || 
                (s[i]=='0' && s[j]=='5') ||
                    (s[i]=='5' && s[j]=='2') ||
                        (s[i]=='5' && s[j]=='7'))
                        {
                            ans=j-i-1+k;
                            cout << ans << endl;
                            return;
                        }
        }
        k++;
    }
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