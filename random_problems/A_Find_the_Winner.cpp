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
    int a, b;
    cin >> a >> b;
    if(a>b)
    {
        cout << "A is the winner by " << a-b << " runs" << endl;
    }
    else if(b>a)
    {
        cout << "B is the winner by " << b-a << " runs" << endl;
    }
    else 
    {
        cout << "A and B has drawn the match" << endl;
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