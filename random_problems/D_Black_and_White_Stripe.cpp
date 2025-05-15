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
    int number, segment;
    cin >> number >> segment;
    string s;
    cin >> s;
    int maxim=1, count=1;
    for(int i=0; i<number-1; i++)
    {
        if(s[i]=='B' && s[i+1]=='B') count++;
        else{
            maxim=max(maxim,count);
            count=1;
        }
    }
    cout << maxim << endl;
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