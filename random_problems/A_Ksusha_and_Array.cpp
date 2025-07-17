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
    int number;
    cin >> number;
    vi vec;
    for(int i=0; i<number; i++)
    {
        int a; cin >> a;
        vec.pb(a);
    }
    int minim = *min_element(all(vec));
    for(int i=0; i<number; i++)
    {
        if(vec[i]%minim!=0) {cout << -1 << endl; return;}
    }
    cout << minim << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}