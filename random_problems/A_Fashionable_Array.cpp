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
    int number;
    cin >> number;
    vi vec(number);
    for(int i=0; i<number; i++) cin >> vec[i];
    sort(all(vec));
    int fodd=0, feven=0, bodd=0, beven=0;
    for(int i=0; i<number; i++)
    {
        if(vec[i]%2!=0) break;
        fodd++;
    }
    for(int i=0; i<number; i++)
    {
        if(vec[i]%2==0) break;
        feven++;
    }
    for(int i=number-1; i>=0; i--)
    {
        if(vec[i]%2!=0) break;
        bodd++;
    }
    for(int i=number-1; i>=0; i--)
    {
        if(vec[i]%2==0) break;
        beven++;
    }
    cout << min(fodd+bodd,feven+beven) << endl;
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