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
    if(number<10) {cout << number << endl; return;}
    vi vec;
    int most=9, sum=0;
    while(sum<number && most>0)
    {
        vec.push_back(min(number-sum, most));
        sum+=most;
        most--;
    }
    if(sum<number) {cout << -1 << endl; return;}
    reverse(all(vec));
    for(int i:vec) cout << i;
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