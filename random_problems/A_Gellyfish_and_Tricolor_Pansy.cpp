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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a<d && b<=c)
    {
        if(b<=a) cout << "Gellyfish" << endl;
        else cout << "Flower" << endl;
    }
    else if(a>=d && b<=c)
    {
        cout << "Gellyfish" << endl;
    }
    else if(a<d && b>=(c+1)) cout << "Flower" << endl;
    else
    {
        if(d<=c) cout << "Gellyfish" << endl;
        else cout << "Flower" << endl;
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