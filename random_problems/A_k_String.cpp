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
    int k;
    cin >> k;
    string s;
    cin >> s;
    int number=s.size();
    vi count(150);
    for(int i=0; i<number; i++) count[s[i]]++;
    for(int i=0; i<150; i++)
    {
        if(count[i]%k!=0 && count[i]!=0) {cout << -1 << endl; return;}
    }
    for(int i=0; i<150; i++)
    {
        count[i]/=k;
    }
    string r;
    for(int i=0; i<150; i++)
    {
        for(int j=0; j<count[i]; j++)
        {
            r.push_back((char)i);
        }
    }
    for(int i=0; i<k; i++)
    {
        cout << r;
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}