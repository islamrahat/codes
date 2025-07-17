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
    int number, q;
    cin >> number >> q;
    vi vec(number);
    for(int i=0; i<number; i++) cin >> vec[i];
    int maxim = *max_element(all(vec));
    while(q--)
    {
        char c;
        int a, b;
        cin >> c >> a >> b; 
        if(maxim>=a && maxim<=b)
        {
            if(c=='+') maxim++;
            else maxim--;
        }
        cout << maxim << " ";
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