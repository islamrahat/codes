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
    int number, k;
    cin >> number >> k;
    vi vec(number);
    for(int i=0; i<number; i++) cin >> vec[i];
    if(number==1) {cout << "YES" << endl; return;}
    int f=1, first1, second1;
    for(int i=0; i<number; i++)
    {
        if(vec[i]==1)
        {
            if(f==1) {first1=i; f=0;}
            second1=i;
        }
    }
    if(second1-first1+1>k) {cout << "NO" << endl;}
    else cout << "YES" << endl;
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