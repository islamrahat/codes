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

int right(int n, int i, int ai)
{
    return (n-i)*ai;
}
int left(int n, int i, int ai)
{
    return (i-1)*ai;
}

void solve()
{
    int number;
    cin >> number;
    vi vec(number);
    for(int i=0; i<number; i++) cin >> vec[i];
    vi ans(number,0);
    for(int i=0; i<number; i++)
    {
        ans[i]=right(number,(i),vec[i])+left(number,(i),vec[i]);
    }
    int minim=*min_element(all(ans));
    cout << minim << endl;
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