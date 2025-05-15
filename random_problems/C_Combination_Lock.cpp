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
    if(number%2==0) {cout << -1 << endl; return;}
    vi vec(number);
    int k=1;
    for(int i=0; i<=number/2; i++)
    {
        vec[i]=k;
        k+=2;
    }
    k=2;
    for(int i=number/2+1; i<number; i++)
    {
        vec[i]=k;
        k+=2;
    }
    for(int i: vec)
    {
        cout << i << " ";
    }
    cout << endl;
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