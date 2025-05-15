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
    int number, k;
    cin >> number >> k;
    vi vec(number);
    int even, odd;
    if(number%2==0)
    {
        even=number;
        odd=number-1;
    }
    else{
        even=number-1;
        odd=number;
    }
    for(int i=0; i<number/2; i++)
    {
        vec[i]=odd;
        odd-=2;
    }
    for(int i=number/2; i<number; i++)
    {
        vec[i]=even;
        even-=2;
    }
    for(int i: vec) cout << i << " ";
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