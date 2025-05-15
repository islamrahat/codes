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
    int number;
    cin >> number;
    string s;
    cin >> s;
    int maxim=2;
    for(int i=0; i<number; i++)
    {
        unordered_set<char> count1(s.begin(),s.begin()+i+1), count2(s.begin()+i+1, s.end());
        int a=count1.size()+count2.size();
        maxim=max(maxim,a);
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