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
    string s1, s2;
    cin >> s1 >> s2;
    int number1=s1.size(), number2=s2.size();
    if(number1!=number2)
    {
        cout << max(number1,number2);
    }
    else
    {
        if(s1==s2) {cout << -1 << endl;}
        else
        {
            cout << number1 << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}